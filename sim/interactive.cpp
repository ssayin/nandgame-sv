#include <memory>

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_vpi.h>

#include "Vcontrol.h"

#include "driver.hpp"
#include "inst.hpp"

#include <iostream>
#include <string_view>

double sc_time_stamp() { return 0; }

struct handle {
  std::string str;
  PLI_INT32 format;
};

std::vector<handle> handles{

    {"Control.control.D", vpiIntVal}, {"Control.control.A_star", vpiIntVal}};

void read_handles_vpi() {
  vpiHandle h;

  for (const handle &hand : handles) {
    h = vpi_handle_by_name((PLI_BYTE8 *)hand.str.c_str(), NULL);
    s_vpi_value v;
    if (!h)
      vl_fatal(__FILE__, __LINE__, "interactive", "No handle found");

    std::string_view vstr = vpi_get_str(vpiName, h);
    v.format = hand.format;
    vpi_get_value(h, &v);
    std::cout << vstr << ": " << v.value.integer << ", "; // endl flush
  }
  std::flush(std::cout);
}

void eval(const std::unique_ptr<Vcontrol> &cont) {
  cont->eval();
  VerilatedVpi::callValueCbs();
  read_handles_vpi();
  std::cout << "A: " << cont->A << std::endl;
}

int main(int argc, char **argv, char **env) {
  const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

  contextp->debug(0);

  contextp->commandArgs(argc, argv);

  const std::unique_ptr<Vcontrol> cont{new Vcontrol{contextp.get(), "Control"}};

  contextp->internalsDump();

  cont->clk = 0;

  driver drv;
  int res = drv();
  if (!res) {
    do {
      contextp->timeInc(1); // 1 timeprecision period passes...
      if (!cont->clk) {
        cont->inst = drv.insts.front();
        drv.insts.pop_front();
      }

      std::cout << "[ " << contextp->time() << " ] "
                << "clk=" << std::to_string(cont->clk) << " " << std::flush;
      eval(cont);
      cont->clk = !cont->clk;
    } while (!drv.insts.empty());

    contextp->timeInc(1); // 1 timeprecision period passes...
    std::cout << "[ " << contextp->time() << " ] "
              << "clk=" << std::to_string(cont->clk) << " " << std::flush;
    eval(cont);
    cont->clk = !cont->clk;
  }
  cont->final();

  return 0;
}
