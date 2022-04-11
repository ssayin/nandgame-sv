// verilator lint_off UNOPTFLAT
module flipflop (
    input  logic clk,
    input  logic st,
    input  logic d,
    output logic out
);

  logic in;
  always_latch begin
    if (st && !clk) in = d;
    if (clk) out = in;
  end

endmodule
