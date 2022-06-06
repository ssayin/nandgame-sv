#include "Vcomputer.h"
#include <iostream>
#include <memory>
#include <nandasm/driver.hpp>
#include <nandasm/inst.hpp>
#include <string>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_vpi.h>

double sc_time_stamp() { return 0; }

struct handle {
  std::string str;
  PLI_INT32 format;
};

std::vector<handle> handles{{"Computer.computer.cont0.D", vpiIntVal},
                            {"Computer.computer.cont0.A_star", vpiIntVal}};

void init_instruction_rom(std::deque<uint16_t> &insts) {
  vpiHandle h;
  h = vpi_handle_by_name((PLI_BYTE8 *)"Computer.computer.rom0.mem", NULL);
  s_vpi_value v;
  if (!h)
    vl_fatal(__FILE__, __LINE__, "interactive", "No handle found");

  std::size_t end = insts.size();
  for (std::size_t i = 0; i < end; i++) {
    vpiHandle index = vpi_handle_by_index(h, i);
    v.format = vpiIntVal;
    v.value.integer = insts[i];
    vpi_put_value(index, &v, NULL, vpiNoDelay);
    vpi_free_object(index);
  }
  vpi_free_object(h);
}

void read_handles_vpi() {
  vpiHandle h;
  for (const handle &hand : handles) {
    h = vpi_handle_by_name((PLI_BYTE8 *)hand.str.c_str(), NULL);
    s_vpi_value v;
    if (!h)
      vl_fatal(__FILE__, __LINE__, "interactive", "No handle found");

    v.format = hand.format;
    vpi_get_value(h, &v);
    std::cout << vpi_get_str(vpiName, h) << ": " << v.value.integer << ", ";
  }
  std::cout << std::endl;
}

int main(int argc, char **argv, char **env) {

  Verilated::mkdir("logs");

  const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

  contextp->debug(0);

  contextp->traceEverOn(true);

  contextp->commandArgs(argc, argv);

  const std::unique_ptr<Vcomputer> cont{
      new Vcomputer{contextp.get(), "Computer"}};

  VerilatedVcdC *m_trace = new VerilatedVcdC;
  cont->trace(m_trace, 50);
  m_trace->open("logs/waveform.vcd");

  contextp->internalsDump();

  cont->clk = 0;

  nandgame::driver drv;

  int res = drv();
  if (!res) {
    init_instruction_rom(drv.insts);
    int cycle_count;
    if (argc == 3 && !strcmp(argv[1], "-c")) {
      cycle_count = std::atoi(argv[2]);
      // cycle_count will be assigned 0, if an error occurs
      // zero cycles will not mean anything anyways
      if (cycle_count == 0)
        return 0;
    }

    int end = (cycle_count << 1);
    for (std::size_t i = 0; i < end; i++) {

      contextp->timeInc(1);
      std::cout << "[ " << contextp->time() << " ] "
                << "clk=" << std::to_string(cont->clk) << " " << std::flush;
      cont->eval();
      VerilatedVpi::callValueCbs();
      read_handles_vpi();
      m_trace->dump(i);
      cont->clk = !cont->clk;
    }
  }
  cont->final();

  delete m_trace;
  m_trace = 0;

  return 0;
}
