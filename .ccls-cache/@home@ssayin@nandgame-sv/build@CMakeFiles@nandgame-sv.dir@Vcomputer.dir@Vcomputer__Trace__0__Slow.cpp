// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcomputer__Syms.h"


VL_ATTR_COLD void Vcomputer___024root__trace_init_sub__TOP__0(Vcomputer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+159,"clk", false,-1);
    tracep->pushNamePrefix("computer ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+1,"jmp_if", false,-1);
    tracep->declBus(c+2,"A", false,-1, 15,0);
    tracep->declBus(c+3,"rom_in", false,-1, 15,0);
    tracep->declBus(c+4,"inst", false,-1, 15,0);
    tracep->pushNamePrefix("cont0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBus(c+4,"inst", false,-1, 15,0);
    tracep->declBit(c+1,"jmp_if", false,-1);
    tracep->declBus(c+2,"A", false,-1, 15,0);
    tracep->declBus(c+5,"in", false,-1, 15,0);
    tracep->declBus(c+6,"w", false,-1, 15,0);
    tracep->declBus(c+7,"mem_X", false,-1, 15,0);
    tracep->declBus(c+8,"alu_Y", false,-1, 15,0);
    tracep->declBus(c+9,"alu_out", false,-1, 15,0);
    tracep->declBus(c+10,"D", false,-1, 15,0);
    tracep->declBus(c+160,"A_star", false,-1, 15,0);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"opc", false,-1, 5,0);
    tracep->declBus(c+10,"x", false,-1, 15,0);
    tracep->declBus(c+8,"y", false,-1, 15,0);
    tracep->declBus(c+9,"out", false,-1, 15,0);
    tracep->declBus(c+12,"X", false,-1, 15,0);
    tracep->declBus(c+13,"Y", false,-1, 15,0);
    tracep->pushNamePrefix("a0 ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+14,"z", false,-1);
    tracep->declBit(c+15,"n", false,-1);
    tracep->declBus(c+10,"x", false,-1, 15,0);
    tracep->declBus(c+12,"out", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a1 ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+16,"z", false,-1);
    tracep->declBit(c+17,"n", false,-1);
    tracep->declBus(c+8,"x", false,-1, 15,0);
    tracep->declBus(c+13,"out", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cond0 ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"j", false,-1, 2,0);
    tracep->declBus(c+9,"x", false,-1, 15,0);
    tracep->declBit(c+1,"out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+4,"inst", false,-1, 15,0);
    tracep->declBit(c+19,"ci", false,-1);
    tracep->declBit(c+20,"sm", false,-1);
    tracep->declBus(c+21,"opc", false,-1, 5,0);
    tracep->declBus(c+22,"dst", false,-1, 2,0);
    tracep->declBus(c+23,"j", false,-1, 2,0);
    tracep->declBus(c+6,"w", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+162,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBus(c+24,"dst", false,-1, 2,0);
    tracep->declBus(c+7,"x", false,-1, 15,0);
    tracep->declBus(c+2,"A", false,-1, 15,0);
    tracep->declBus(c+10,"D", false,-1, 15,0);
    tracep->declBus(c+160,"A_star", false,-1, 15,0);
    tracep->declBus(c+2,"r_addr_out", false,-1, 15,0);
    tracep->declBus(c+10,"r_data_out", false,-1, 15,0);
    tracep->declBus(c+160,"ram_out", false,-1, 15,0);
    tracep->pushNamePrefix("ram0 ");
    tracep->declBus(c+162,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+162,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBus(c+2,"addr", false,-1, 15,0);
    tracep->declBit(c+25,"st", false,-1);
    tracep->declBus(c+7,"x", false,-1, 15,0);
    tracep->declBus(c+160,"out", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mux2_ci ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+26,"sel", false,-1);
    tracep->declBus(c+6,"d0", false,-1, 15,0);
    tracep->declBus(c+9,"d1", false,-1, 15,0);
    tracep->declBus(c+7,"out", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2_sm ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+27,"sel", false,-1);
    tracep->declBus(c+2,"d0", false,-1, 15,0);
    tracep->declBus(c+160,"d1", false,-1, 15,0);
    tracep->declBus(c+8,"out", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+1,"st", false,-1);
    tracep->declBus(c+2,"x", false,-1, 15,0);
    tracep->declBus(c+3,"out", false,-1, 15,0);
    tracep->declBus(c+28,"lb", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom0 ");
    tracep->declBus(c+3,"addr", false,-1, 15,0);
    tracep->declBus(c+4,"out", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcomputer___024root__trace_init_sub__TOP__computer__DOT__pc__DOT__r__0(Vcomputer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_init_sub__TOP__computer__DOT__pc__DOT__r__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBus(c+28,"d", false,-1, 15,0);
    tracep->declBus(c+3,"out", false,-1, 15,0);
    tracep->pushNamePrefix("gen_register_ff[0] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+29,"d", false,-1);
    tracep->declBit(c+30,"out", false,-1);
    tracep->declBit(c+31,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[10] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+32,"d", false,-1);
    tracep->declBit(c+33,"out", false,-1);
    tracep->declBit(c+34,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[11] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+35,"d", false,-1);
    tracep->declBit(c+36,"out", false,-1);
    tracep->declBit(c+37,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[12] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+38,"d", false,-1);
    tracep->declBit(c+39,"out", false,-1);
    tracep->declBit(c+40,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[13] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+41,"d", false,-1);
    tracep->declBit(c+42,"out", false,-1);
    tracep->declBit(c+43,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[14] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+44,"d", false,-1);
    tracep->declBit(c+45,"out", false,-1);
    tracep->declBit(c+46,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[15] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+47,"d", false,-1);
    tracep->declBit(c+48,"out", false,-1);
    tracep->declBit(c+49,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[1] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+50,"d", false,-1);
    tracep->declBit(c+51,"out", false,-1);
    tracep->declBit(c+52,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[2] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+53,"d", false,-1);
    tracep->declBit(c+54,"out", false,-1);
    tracep->declBit(c+55,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[3] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+56,"d", false,-1);
    tracep->declBit(c+57,"out", false,-1);
    tracep->declBit(c+58,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[4] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+59,"d", false,-1);
    tracep->declBit(c+60,"out", false,-1);
    tracep->declBit(c+61,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[5] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+62,"d", false,-1);
    tracep->declBit(c+63,"out", false,-1);
    tracep->declBit(c+64,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[6] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+65,"d", false,-1);
    tracep->declBit(c+66,"out", false,-1);
    tracep->declBit(c+67,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[7] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+68,"d", false,-1);
    tracep->declBit(c+69,"out", false,-1);
    tracep->declBit(c+70,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[8] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+71,"d", false,-1);
    tracep->declBit(c+72,"out", false,-1);
    tracep->declBit(c+73,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[9] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+161,"st", false,-1);
    tracep->declBit(c+74,"d", false,-1);
    tracep->declBit(c+75,"out", false,-1);
    tracep->declBit(c+76,"in", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcomputer___024root__trace_init_sub__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__0(Vcomputer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_init_sub__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBus(c+7,"d", false,-1, 15,0);
    tracep->declBus(c+2,"out", false,-1, 15,0);
    tracep->pushNamePrefix("gen_register_ff[0] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+78,"d", false,-1);
    tracep->declBit(c+79,"out", false,-1);
    tracep->declBit(c+80,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[10] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+81,"d", false,-1);
    tracep->declBit(c+82,"out", false,-1);
    tracep->declBit(c+83,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[11] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+84,"d", false,-1);
    tracep->declBit(c+85,"out", false,-1);
    tracep->declBit(c+86,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[12] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+87,"d", false,-1);
    tracep->declBit(c+88,"out", false,-1);
    tracep->declBit(c+89,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[13] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+90,"d", false,-1);
    tracep->declBit(c+91,"out", false,-1);
    tracep->declBit(c+92,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[14] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+93,"d", false,-1);
    tracep->declBit(c+94,"out", false,-1);
    tracep->declBit(c+95,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[15] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+96,"d", false,-1);
    tracep->declBit(c+97,"out", false,-1);
    tracep->declBit(c+98,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[1] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+99,"d", false,-1);
    tracep->declBit(c+100,"out", false,-1);
    tracep->declBit(c+101,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[2] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+102,"d", false,-1);
    tracep->declBit(c+103,"out", false,-1);
    tracep->declBit(c+104,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[3] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+105,"d", false,-1);
    tracep->declBit(c+106,"out", false,-1);
    tracep->declBit(c+107,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[4] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+108,"d", false,-1);
    tracep->declBit(c+109,"out", false,-1);
    tracep->declBit(c+110,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[5] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+111,"d", false,-1);
    tracep->declBit(c+112,"out", false,-1);
    tracep->declBit(c+113,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[6] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+114,"d", false,-1);
    tracep->declBit(c+115,"out", false,-1);
    tracep->declBit(c+116,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[7] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+117,"d", false,-1);
    tracep->declBit(c+118,"out", false,-1);
    tracep->declBit(c+119,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[8] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+120,"d", false,-1);
    tracep->declBit(c+121,"out", false,-1);
    tracep->declBit(c+122,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[9] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+77,"st", false,-1);
    tracep->declBit(c+123,"d", false,-1);
    tracep->declBit(c+124,"out", false,-1);
    tracep->declBit(c+125,"in", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcomputer___024root__trace_init_sub__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0(Vcomputer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_init_sub__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBus(c+7,"d", false,-1, 15,0);
    tracep->declBus(c+10,"out", false,-1, 15,0);
    tracep->pushNamePrefix("gen_register_ff[0] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+78,"d", false,-1);
    tracep->declBit(c+127,"out", false,-1);
    tracep->declBit(c+128,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[10] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+81,"d", false,-1);
    tracep->declBit(c+129,"out", false,-1);
    tracep->declBit(c+130,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[11] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+84,"d", false,-1);
    tracep->declBit(c+131,"out", false,-1);
    tracep->declBit(c+132,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[12] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+87,"d", false,-1);
    tracep->declBit(c+133,"out", false,-1);
    tracep->declBit(c+134,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[13] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+90,"d", false,-1);
    tracep->declBit(c+135,"out", false,-1);
    tracep->declBit(c+136,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[14] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+93,"d", false,-1);
    tracep->declBit(c+137,"out", false,-1);
    tracep->declBit(c+138,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[15] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+96,"d", false,-1);
    tracep->declBit(c+139,"out", false,-1);
    tracep->declBit(c+140,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[1] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+99,"d", false,-1);
    tracep->declBit(c+141,"out", false,-1);
    tracep->declBit(c+142,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[2] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+102,"d", false,-1);
    tracep->declBit(c+143,"out", false,-1);
    tracep->declBit(c+144,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[3] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+105,"d", false,-1);
    tracep->declBit(c+145,"out", false,-1);
    tracep->declBit(c+146,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[4] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+108,"d", false,-1);
    tracep->declBit(c+147,"out", false,-1);
    tracep->declBit(c+148,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[5] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+111,"d", false,-1);
    tracep->declBit(c+149,"out", false,-1);
    tracep->declBit(c+150,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[6] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+114,"d", false,-1);
    tracep->declBit(c+151,"out", false,-1);
    tracep->declBit(c+152,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[7] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+117,"d", false,-1);
    tracep->declBit(c+153,"out", false,-1);
    tracep->declBit(c+154,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[8] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+120,"d", false,-1);
    tracep->declBit(c+155,"out", false,-1);
    tracep->declBit(c+156,"in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_register_ff[9] ");
    tracep->pushNamePrefix("ff0 ");
    tracep->declBit(c+159,"clk", false,-1);
    tracep->declBit(c+126,"st", false,-1);
    tracep->declBit(c+123,"d", false,-1);
    tracep->declBit(c+157,"out", false,-1);
    tracep->declBit(c+158,"in", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcomputer___024root__trace_init_top(Vcomputer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_init_top\n"); );
    // Body
    Vcomputer___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("computer ");
    tracep->pushNamePrefix("cont0 ");
    tracep->pushNamePrefix("mem ");
    tracep->pushNamePrefix("r_addr ");
    Vcomputer___024root__trace_init_sub__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("r_data ");
    Vcomputer___024root__trace_init_sub__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("pc ");
    tracep->pushNamePrefix("r ");
    Vcomputer___024root__trace_init_sub__TOP__computer__DOT__pc__DOT__r__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcomputer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vcomputer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vcomputer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcomputer___024root__trace_register(Vcomputer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcomputer___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcomputer___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcomputer___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcomputer___024root__trace_full_sub_0(Vcomputer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcomputer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_full_top_0\n"); );
    // Init
    Vcomputer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomputer___024root*>(voidSelf);
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcomputer___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vcomputer___024root__trace_full_sub_0(Vcomputer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->computer__DOT__jmp_if));
    tracep->fullSData(oldp+2,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out),16);
    tracep->fullSData(oldp+3,(vlSymsp->TOP__computer__DOT__pc__DOT__r.out),16);
    tracep->fullSData(oldp+4,(vlSelf->computer__DOT__inst),16);
    tracep->fullSData(oldp+5,(vlSelf->computer__DOT__cont0__DOT__in),16);
    tracep->fullSData(oldp+6,(vlSelf->computer__DOT__cont0__DOT__w),16);
    tracep->fullSData(oldp+7,(vlSelf->computer__DOT__cont0__DOT__mem_X),16);
    tracep->fullSData(oldp+8,(vlSelf->computer__DOT__cont0__DOT__alu_Y),16);
    tracep->fullSData(oldp+9,(vlSelf->computer__DOT__cont0__DOT__alu_out),16);
    tracep->fullSData(oldp+10,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out),16);
    tracep->fullCData(oldp+11,((0x3fU & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                         >> 6U))),6);
    tracep->fullSData(oldp+12,(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X),16);
    tracep->fullSData(oldp+13,(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y),16);
    tracep->fullBit(oldp+14,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                    >> 0xbU))));
    tracep->fullBit(oldp+15,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                    >> 0xaU))));
    tracep->fullBit(oldp+16,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                    >> 9U))));
    tracep->fullBit(oldp+17,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                    >> 8U))));
    tracep->fullCData(oldp+18,((7U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))),3);
    tracep->fullBit(oldp+19,((1U & ((IData)(vlSelf->computer__DOT__inst) 
                                    >> 0xfU))));
    tracep->fullBit(oldp+20,(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__sm));
    tracep->fullCData(oldp+21,(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc),6);
    tracep->fullCData(oldp+22,(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst),3);
    tracep->fullCData(oldp+23,(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j),3);
    tracep->fullCData(oldp+24,((7U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                      >> 3U))),3);
    tracep->fullBit(oldp+25,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                    >> 3U))));
    tracep->fullBit(oldp+26,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                    >> 0xfU))));
    tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                    >> 0xcU))));
    tracep->fullSData(oldp+28,(vlSelf->computer__DOT__pc__DOT__lb),16);
    tracep->fullBit(oldp+29,((1U & (IData)(vlSelf->computer__DOT__pc__DOT__lb))));
    tracep->fullBit(oldp+30,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out));
    tracep->fullBit(oldp+31,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+32,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 0xaU))));
    tracep->fullBit(oldp+33,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out));
    tracep->fullBit(oldp+34,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+35,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 0xbU))));
    tracep->fullBit(oldp+36,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out));
    tracep->fullBit(oldp+37,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+38,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 0xcU))));
    tracep->fullBit(oldp+39,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out));
    tracep->fullBit(oldp+40,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+41,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 0xdU))));
    tracep->fullBit(oldp+42,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out));
    tracep->fullBit(oldp+43,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+44,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 0xeU))));
    tracep->fullBit(oldp+45,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out));
    tracep->fullBit(oldp+46,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+47,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 0xfU))));
    tracep->fullBit(oldp+48,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out));
    tracep->fullBit(oldp+49,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+50,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 1U))));
    tracep->fullBit(oldp+51,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out));
    tracep->fullBit(oldp+52,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+53,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 2U))));
    tracep->fullBit(oldp+54,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out));
    tracep->fullBit(oldp+55,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+56,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 3U))));
    tracep->fullBit(oldp+57,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out));
    tracep->fullBit(oldp+58,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+59,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 4U))));
    tracep->fullBit(oldp+60,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out));
    tracep->fullBit(oldp+61,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+62,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 5U))));
    tracep->fullBit(oldp+63,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out));
    tracep->fullBit(oldp+64,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+65,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 6U))));
    tracep->fullBit(oldp+66,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out));
    tracep->fullBit(oldp+67,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+68,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 7U))));
    tracep->fullBit(oldp+69,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out));
    tracep->fullBit(oldp+70,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+71,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 8U))));
    tracep->fullBit(oldp+72,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out));
    tracep->fullBit(oldp+73,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+74,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                    >> 9U))));
    tracep->fullBit(oldp+75,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out));
    tracep->fullBit(oldp+76,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+77,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                    >> 5U))));
    tracep->fullBit(oldp+78,((1U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X))));
    tracep->fullBit(oldp+79,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out));
    tracep->fullBit(oldp+80,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+81,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                    >> 0xaU))));
    tracep->fullBit(oldp+82,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out));
    tracep->fullBit(oldp+83,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+84,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                    >> 0xbU))));
    tracep->fullBit(oldp+85,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out));
    tracep->fullBit(oldp+86,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+87,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                    >> 0xcU))));
    tracep->fullBit(oldp+88,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out));
    tracep->fullBit(oldp+89,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+90,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                    >> 0xdU))));
    tracep->fullBit(oldp+91,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out));
    tracep->fullBit(oldp+92,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+93,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                    >> 0xeU))));
    tracep->fullBit(oldp+94,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out));
    tracep->fullBit(oldp+95,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+96,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                    >> 0xfU))));
    tracep->fullBit(oldp+97,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out));
    tracep->fullBit(oldp+98,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+99,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                    >> 1U))));
    tracep->fullBit(oldp+100,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out));
    tracep->fullBit(oldp+101,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+102,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                     >> 2U))));
    tracep->fullBit(oldp+103,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out));
    tracep->fullBit(oldp+104,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+105,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                     >> 3U))));
    tracep->fullBit(oldp+106,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out));
    tracep->fullBit(oldp+107,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+108,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                     >> 4U))));
    tracep->fullBit(oldp+109,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out));
    tracep->fullBit(oldp+110,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+111,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                     >> 5U))));
    tracep->fullBit(oldp+112,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out));
    tracep->fullBit(oldp+113,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+114,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                     >> 6U))));
    tracep->fullBit(oldp+115,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out));
    tracep->fullBit(oldp+116,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+117,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                     >> 7U))));
    tracep->fullBit(oldp+118,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out));
    tracep->fullBit(oldp+119,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+120,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                     >> 8U))));
    tracep->fullBit(oldp+121,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out));
    tracep->fullBit(oldp+122,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+123,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                     >> 9U))));
    tracep->fullBit(oldp+124,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out));
    tracep->fullBit(oldp+125,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+126,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                     >> 4U))));
    tracep->fullBit(oldp+127,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out));
    tracep->fullBit(oldp+128,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+129,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out));
    tracep->fullBit(oldp+130,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+131,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out));
    tracep->fullBit(oldp+132,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+133,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out));
    tracep->fullBit(oldp+134,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+135,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out));
    tracep->fullBit(oldp+136,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+137,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out));
    tracep->fullBit(oldp+138,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+139,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out));
    tracep->fullBit(oldp+140,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+141,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out));
    tracep->fullBit(oldp+142,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+143,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out));
    tracep->fullBit(oldp+144,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+145,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out));
    tracep->fullBit(oldp+146,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+147,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out));
    tracep->fullBit(oldp+148,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+149,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out));
    tracep->fullBit(oldp+150,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+151,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out));
    tracep->fullBit(oldp+152,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+153,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out));
    tracep->fullBit(oldp+154,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+155,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out));
    tracep->fullBit(oldp+156,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+157,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out));
    tracep->fullBit(oldp+158,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in));
    tracep->fullBit(oldp+159,(vlSelf->clk));
    tracep->fullSData(oldp+160,(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out),16);
    tracep->fullBit(oldp+161,((1U & (~ (IData)(vlSelf->clk)))));
    tracep->fullIData(oldp+162,(0x10U),32);
}
