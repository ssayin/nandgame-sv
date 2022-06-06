module rom2 #(
    parameter int DATA_WIDTH = 16,
    parameter int ADDR_WIDTH = 16
) (
    input  logic [(ADDR_WIDTH-1):0] addr,
    output logic [(DATA_WIDTH-1):0] out
);

  logic [DATA_WIDTH-1:0] mem[2**ADDR_WIDTH]  /*verilator public_flat_rw*/;

  always @(addr) out = mem[addr];

endmodule
