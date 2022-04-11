module condition #(
    parameter int WIDTH = 16
) (
    input jmp_flag_t j,
    input logic [WIDTH - 1 : 0] x,
    output logic out
);

  always_comb begin
    case ({
      j.lt, j.eq, j.gt
    })
      3'b000:  out = 1'b0;
      3'b001:  out = ($signed(x) > 0);
      3'b010:  out = ($signed(x) == 0);
      3'b011:  out = ($signed(x) >= 0);
      3'b100:  out = ($signed(x) < 0);
      3'b101:  out = ($signed(x) != 0);
      3'b110:  out = ($signed(x) <= 0);
      3'b111:  out = 1'b1;
      default: out = 1'b0;
    endcase
  end
endmodule
