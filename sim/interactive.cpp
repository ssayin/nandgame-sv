#include "Vcomputer.h"
#include <iostream>
#include <memory>
#include <nandasm/driver.hpp>
#include <nandasm/inst.hpp>
#include <string>
#include <verilated.h>
#include <verilated_vcd_c.h>

#include "VPIObject.hpp"

double sc_time_stamp() { return 0; }

void init_instruction_rom(std::deque<uint16_t> &insts) {
  VPIObject rom("Computer.computer.rom0.mem");
  std::size_t end = insts.size();
  for (std::size_t i = 0; i < end; i++) {
    VPIObject(rom, i).putInteger(insts[i]);
  }
}

void read_handles_vpi() {
  VPIObject regD("Computer.computer.cont0.D");
  VPIObject regMem("Computer.computer.cont0.A_star");

  std::cout << regD.getStr() << ": " << regD.readInteger() << ", "
            << regMem.getStr() << ": " << regMem.readInteger() << std::endl;
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
    int cycle_count = drv.insts.size();
    if (argc == 3 && !strcmp(argv[1], "-c")) {
      cycle_count = std::atoi(argv[2]);
      // cycle_count will be assigned 0, if an error occurs
      // zero cycles will not mean anything anyways
      if (cycle_count == 0)
        return 0;
    } else
      std::cout << "Cycle count was not set. Using instruction count."
                << std::endl;

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
