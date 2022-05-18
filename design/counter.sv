`include "defs.sv"

import defs::*;

module counter #(
    parameter int WIDTH = 16
) (
    input logic clk,
    input logic st,
    input logic [WIDTH - 1:0] x,
    output logic [WIDTH - 1:0] out
);

  logic [WIDTH - 1:0] lb;

  regst #(WIDTH) r (
      .clk(clk),
      .st (!clk),
      .d  (lb),
      .out(out)
  );

  assign lb = st ? x : out + 1;

endmodule
