module mux2 #(
    parameter int WIDTH = 16
) (
    input logic sel,
    input logic [WIDTH - 1 : 0] d0,
    input logic [WIDTH - 1 : 0] d1,
    output logic [WIDTH - 1 : 0] out
);

  assign out = sel ? d1 : d0;

endmodule
