#include <memory>

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_vpi.h>

#include "Vcontrol.h"

#include "inst.hpp"
#include "parser.hpp"

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
    std::cout << vstr << ": " << v.value.integer << std::endl; // endl flush
  }
}

int parse() {
  yy::parser p;
  int ret;

  try {
    ret = p();
  } catch (yy::parser::syntax_error &err) {
    ret = -1;
  }
  return ret;
}

int main(int argc, char **argv, char **env) {
  const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

  contextp->debug(0);

  contextp->commandArgs(argc, argv);

  const std::unique_ptr<Vcontrol> cont{new Vcontrol{contextp.get(), "Control"}};

  contextp->internalsDump();

  cont->clk = 0;
  int i = 0;
  while (i < 50) {
    i++;
    contextp->timeInc(1); // 1 timeprecision period passes...
    do {
      std::cout << "Input: " << std::flush;
    } while (parse()); // get input until no parser err
    cont->inst = inst.m_inst;
    cont->eval();

    cont->clk = !cont->clk;
    cont->eval();
    VerilatedVpi::callValueCbs();
    read_handles_vpi();
    std::cout << "A: " << cont->A << std::endl;

    cont->clk = !cont->clk;
  }
  cont->final();

  return 0;
}
