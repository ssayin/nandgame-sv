`include "defs.sv"

import defs::*;

module rom (
    input  logic [15:0] addr,
    output logic [15:0] out
);

  always_comb
    case (addr)
      0: out = 36816;  // D = 1
      1: out = 34768;  // D = D + 1
      2: out = 1;  // A = 1
      3: out = 32775;  // JMP
      default: out = 0;
    endcase

endmodule

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

  rom rom0 (
      .addr(rom_in),
      .out (inst)
  );
endmodule
