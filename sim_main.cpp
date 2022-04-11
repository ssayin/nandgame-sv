#include <memory>

#include <verilated.h>
#include <verilated_vcd_c.h>

#include "Vcomputer.h"

double sc_time_stamp() { return 0; }

int main(int argc, char **argv, char **env) {
  Verilated::mkdir("logs");
  const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

  contextp->debug(0);

  contextp->traceEverOn(true);

  contextp->commandArgs(argc, argv);

  const std::unique_ptr<Vcomputer> computer{
      new Vcomputer{contextp.get(), "Computer"}};

  computer->clk = 0;

  VerilatedVcdC *m_trace = new VerilatedVcdC;
  computer->trace(m_trace, 50);
  m_trace->open("logs/waveform.vcd");

  int i = 0;
  while (i < 50) {
    i++;
    contextp->timeInc(1); // 1 timeprecision period passes...
    computer->clk = !computer->clk;
    computer->eval();
    m_trace->dump(i);
  }
  m_trace->close();
  computer->final();

  delete m_trace;
  m_trace = 0;
  return 0;
}
