module ram_dw #(
    parameter int WIDTH = 16
) (
    input logic clk,
    input logic addr,
    input logic st,
    input logic [WIDTH - 1:0] x,
    output logic [WIDTH - 1:0] out
);

  logic [WIDTH - 1 : 0] rout[2];
  logic [1:0] sel;

  regst #(
      .WIDTH(WIDTH)
  ) r0 (
      .clk(clk),
      .st (sel[0]),
      .d  (x),
      .out(rout[0])
  );

  regst #(
      .WIDTH(WIDTH)
  ) r1 (
      .clk(clk),
      .st (sel[1]),
      .d  (x),
      .out(rout[1])
  );

  assign sel[0] = !addr && st;
  assign sel[1] = addr && st;
  assign out = addr ? rout[1] : rout[0];
endmodule

