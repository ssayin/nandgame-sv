// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer___024root.h"

VL_ATTR_COLD void Vcomputer___024root___eval_initial(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcomputer___024root___final(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___final\n"); );
}

VL_ATTR_COLD void Vcomputer___024root___ctor_var_reset(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->computer__DOT__jmp_if = VL_RAND_RESET_I(1);
    vlSelf->computer__DOT__inst = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->computer__DOT____Vtogcov__jmp_if = VL_RAND_RESET_I(1);
    vlSelf->computer__DOT____Vtogcov__A = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT____Vtogcov__rom_in = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT____Vtogcov__inst = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__pc__DOT__lb = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__pc__DOT____Vtogcov__lb = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__in = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__mem_X = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__alu_Y = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__alu_out = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j = VL_RAND_RESET_I(3);
    vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst = VL_RAND_RESET_I(3);
    vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc = VL_RAND_RESET_I(6);
    vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__sm = VL_RAND_RESET_I(1);
    vlSelf->computer__DOT__cont0__DOT____Vtogcov__in = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT____Vtogcov__w = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT____Vtogcov__D = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__sm = VL_RAND_RESET_I(1);
    vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc = VL_RAND_RESET_I(6);
    vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst = VL_RAND_RESET_I(3);
    vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j = VL_RAND_RESET_I(3);
    vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc = VL_RAND_RESET_I(6);
    vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y = VL_RAND_RESET_I(16);
    vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j = VL_RAND_RESET_I(3);
    vlSelf->__Vchglast__TOP__computer__DOT__pc__DOT__r__out = VL_RAND_RESET_I(16);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
