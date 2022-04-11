module inst_decoder (
    input inst_word_t inst,
    output logic ci,
    output logic sm,
    output op_flag_t opc,
    output dst_flag_t dst,
    output jmp_flag_t j,
    output logic [15 : 0] w
);


  always_comb begin
    case (inst.kind)
      1'b0: begin
        w   = inst;
        dst = 3'b100;
        opc = 6'b000000;
        j   = 3'b000;
        ci  = 1'b0;
        sm  = 1'b0;

      end
      1'b1: begin
        ci  = 1'b1;
        w   = 0;
        sm  = inst.sm;
        opc = inst.opc;
        dst = inst.dst;
        j   = inst.j;

      end
      default: begin

      end
    endcase
  end


endmodule
