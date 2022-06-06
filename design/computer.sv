`include "defs.sv"

import defs::*;

module computer (
    input logic clk
);

  logic jmp_if;
  logic [15:0] A;
  logic [15:0] rom_in;
  logic [15:0] inst;


  counter pc (
      .clk(clk),
      .st (jmp_if),
      .x  (A),
      .out(rom_in)
  );

  control cont0 (.*);
  rom2 #(
      .DATA_WIDTH(16),
      .ADDR_WIDTH(16)
  ) rom0 (
      .addr(rom_in),
      .out (inst)
  );
endmodule
