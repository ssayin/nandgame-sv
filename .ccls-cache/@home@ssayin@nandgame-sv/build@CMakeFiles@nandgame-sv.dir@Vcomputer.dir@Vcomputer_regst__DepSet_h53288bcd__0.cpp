// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer_regst.h"

VL_INLINE_OPT void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__1(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__1\n"); );
    // Body
    vlSelf->out = ((0xfff0U & (IData)(vlSelf->out)) 
                   | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out) 
                       << 3U) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out) 
                                  << 2U) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out) 
                                             << 1U) 
                                            | (IData)(vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out)))));
    vlSelf->out = ((0xff0fU & (IData)(vlSelf->out)) 
                   | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out) 
                       << 7U) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out) 
                                  << 6U) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out) 
                                             << 5U) 
                                            | ((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out) 
                                               << 4U)))));
    vlSelf->out = ((0xf0ffU & (IData)(vlSelf->out)) 
                   | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out) 
                       << 0xbU) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out) 
                                    << 0xaU) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out) 
                                                 << 9U) 
                                                | ((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out) 
                                                   << 8U)))));
    vlSelf->out = ((0xfffU & (IData)(vlSelf->out)) 
                   | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out) 
                       << 0xfU) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out) 
                                    << 0xeU) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out) 
                                                 << 0xdU) 
                                                | ((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out) 
                                                   << 0xcU)))));
}
