// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer__Syms.h"
#include "Vcomputer_regst.h"

VL_INLINE_OPT void Vcomputer_regst___combo__TOP__computer__DOT__pc__DOT__r__0(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___combo__TOP__computer__DOT__pc__DOT__r__0\n"); );
    // Body
    if ((1U ^ ((IData)(vlSymsp->TOP.clk) ^ (IData)(vlSelf->__Vtogcov__st)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->__Vtogcov__st = (1U & (~ (IData)(vlSymsp->TOP.clk)));
    }
}

VL_INLINE_OPT void Vcomputer_regst___combo__TOP__computer__DOT__pc__DOT__r__1(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___combo__TOP__computer__DOT__pc__DOT__r__1\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
               ^ (IData)(vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & (IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 1U) ^ (IData)(vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 1U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 2U) ^ (IData)(vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 2U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 3U) ^ (IData)(vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 3U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 4U) ^ (IData)(vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 4U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 5U) ^ (IData)(vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 5U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 6U) ^ (IData)(vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 6U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 7U) ^ (IData)(vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 7U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 8U) ^ (IData)(vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 8U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 9U) ^ (IData)(vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 9U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 0xaU) ^ (IData)(vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xaU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 0xbU) ^ (IData)(vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xbU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 0xcU) ^ (IData)(vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xcU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 0xdU) ^ (IData)(vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xdU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                >> 0xeU) ^ (IData)(vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xeU));
    }
    if ((IData)((((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                  >> 0xfU) ^ (IData)(vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xfU));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in 
            = (1U & (IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb));
    } else {
        ++(vlSymsp->__Vcoverage[276]);
    }
    ++(vlSymsp->__Vcoverage[279]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[278]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 1U));
    } else {
        ++(vlSymsp->__Vcoverage[283]);
    }
    ++(vlSymsp->__Vcoverage[286]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[285]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 2U));
    } else {
        ++(vlSymsp->__Vcoverage[290]);
    }
    ++(vlSymsp->__Vcoverage[293]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[292]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 3U));
    } else {
        ++(vlSymsp->__Vcoverage[297]);
    }
    ++(vlSymsp->__Vcoverage[300]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[299]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[304]);
    }
    ++(vlSymsp->__Vcoverage[307]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[306]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 5U));
    } else {
        ++(vlSymsp->__Vcoverage[311]);
    }
    ++(vlSymsp->__Vcoverage[314]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[313]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 6U));
    } else {
        ++(vlSymsp->__Vcoverage[318]);
    }
    ++(vlSymsp->__Vcoverage[321]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[320]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 7U));
    } else {
        ++(vlSymsp->__Vcoverage[325]);
    }
    ++(vlSymsp->__Vcoverage[328]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[327]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 8U));
    } else {
        ++(vlSymsp->__Vcoverage[332]);
    }
    ++(vlSymsp->__Vcoverage[335]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[334]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 9U));
    } else {
        ++(vlSymsp->__Vcoverage[339]);
    }
    ++(vlSymsp->__Vcoverage[342]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[341]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xaU));
    } else {
        ++(vlSymsp->__Vcoverage[346]);
    }
    ++(vlSymsp->__Vcoverage[349]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[348]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xbU));
    } else {
        ++(vlSymsp->__Vcoverage[353]);
    }
    ++(vlSymsp->__Vcoverage[356]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[355]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xcU));
    } else {
        ++(vlSymsp->__Vcoverage[360]);
    }
    ++(vlSymsp->__Vcoverage[363]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[362]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xdU));
    } else {
        ++(vlSymsp->__Vcoverage[367]);
    }
    ++(vlSymsp->__Vcoverage[370]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[369]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xeU));
    } else {
        ++(vlSymsp->__Vcoverage[374]);
    }
    ++(vlSymsp->__Vcoverage[377]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[376]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.clk)))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__pc__DOT__lb) 
                     >> 0xfU));
    } else {
        ++(vlSymsp->__Vcoverage[381]);
    }
    ++(vlSymsp->__Vcoverage[384]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[383]);
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out;
    }
    vlSelf->out = ((0xfff0U & (IData)(vlSelf->out)) 
                   | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out) 
                       << 3U) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out) 
                                  << 2U) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out) 
                                             << 1U) 
                                            | (IData)(vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out)))));
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out;
    }
    vlSelf->out = ((0xff0fU & (IData)(vlSelf->out)) 
                   | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out) 
                       << 7U) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out) 
                                  << 6U) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out) 
                                             << 5U) 
                                            | ((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out) 
                                               << 4U)))));
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out;
    }
    vlSelf->out = ((0xf0ffU & (IData)(vlSelf->out)) 
                   | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out) 
                       << 0xbU) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out) 
                                    << 0xaU) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out) 
                                                 << 9U) 
                                                | ((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out) 
                                                   << 8U)))));
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out;
    }
    vlSelf->out = ((0xfffU & (IData)(vlSelf->out)) 
                   | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out) 
                       << 0xfU) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out) 
                                    << 0xeU) | (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out) 
                                                 << 0xdU) 
                                                | ((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out) 
                                                   << 0xcU)))));
}

VL_INLINE_OPT void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__0(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__0\n"); );
    // Body
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out;
    }
}

VL_INLINE_OPT void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__2(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__2\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
               ^ (IData)(vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & (IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 1U) ^ (IData)(vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 1U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 2U) ^ (IData)(vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 2U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 3U) ^ (IData)(vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 3U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 4U) ^ (IData)(vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 4U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 5U) ^ (IData)(vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 5U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 6U) ^ (IData)(vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 6U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 7U) ^ (IData)(vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 7U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 8U) ^ (IData)(vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 8U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 9U) ^ (IData)(vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 9U));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 0xaU) ^ (IData)(vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xaU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 0xbU) ^ (IData)(vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xbU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 0xcU) ^ (IData)(vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xcU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 0xdU) ^ (IData)(vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xdU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                >> 0xeU) ^ (IData)(vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xeU));
    }
    if ((IData)((((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                  >> 0xfU) ^ (IData)(vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__d 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xfU));
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in 
            = (1U & (IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X));
    } else {
        ++(vlSymsp->__Vcoverage[276]);
    }
    ++(vlSymsp->__Vcoverage[279]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[278]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 1U));
    } else {
        ++(vlSymsp->__Vcoverage[283]);
    }
    ++(vlSymsp->__Vcoverage[286]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[285]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 2U));
    } else {
        ++(vlSymsp->__Vcoverage[290]);
    }
    ++(vlSymsp->__Vcoverage[293]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[292]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 3U));
    } else {
        ++(vlSymsp->__Vcoverage[297]);
    }
    ++(vlSymsp->__Vcoverage[300]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[299]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[304]);
    }
    ++(vlSymsp->__Vcoverage[307]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[306]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 5U));
    } else {
        ++(vlSymsp->__Vcoverage[311]);
    }
    ++(vlSymsp->__Vcoverage[314]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[313]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 6U));
    } else {
        ++(vlSymsp->__Vcoverage[318]);
    }
    ++(vlSymsp->__Vcoverage[321]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[320]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 7U));
    } else {
        ++(vlSymsp->__Vcoverage[325]);
    }
    ++(vlSymsp->__Vcoverage[328]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[327]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 8U));
    } else {
        ++(vlSymsp->__Vcoverage[332]);
    }
    ++(vlSymsp->__Vcoverage[335]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[334]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 9U));
    } else {
        ++(vlSymsp->__Vcoverage[339]);
    }
    ++(vlSymsp->__Vcoverage[342]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[341]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xaU));
    } else {
        ++(vlSymsp->__Vcoverage[346]);
    }
    ++(vlSymsp->__Vcoverage[349]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[348]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xbU));
    } else {
        ++(vlSymsp->__Vcoverage[353]);
    }
    ++(vlSymsp->__Vcoverage[356]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[355]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xcU));
    } else {
        ++(vlSymsp->__Vcoverage[360]);
    }
    ++(vlSymsp->__Vcoverage[363]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[362]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xdU));
    } else {
        ++(vlSymsp->__Vcoverage[367]);
    }
    ++(vlSymsp->__Vcoverage[370]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[369]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xeU));
    } else {
        ++(vlSymsp->__Vcoverage[374]);
    }
    ++(vlSymsp->__Vcoverage[377]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[376]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xfU));
    } else {
        ++(vlSymsp->__Vcoverage[381]);
    }
    ++(vlSymsp->__Vcoverage[384]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[383]);
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in;
    }
}

VL_INLINE_OPT void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0\n"); );
    // Body
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out;
    }
    if (((IData)(vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__out 
            = vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out;
    }
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

VL_INLINE_OPT void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__1(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__1\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in 
            = (1U & (IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X));
    } else {
        ++(vlSymsp->__Vcoverage[276]);
    }
    ++(vlSymsp->__Vcoverage[279]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[278]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 1U));
    } else {
        ++(vlSymsp->__Vcoverage[283]);
    }
    ++(vlSymsp->__Vcoverage[286]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[285]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 2U));
    } else {
        ++(vlSymsp->__Vcoverage[290]);
    }
    ++(vlSymsp->__Vcoverage[293]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[292]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 3U));
    } else {
        ++(vlSymsp->__Vcoverage[297]);
    }
    ++(vlSymsp->__Vcoverage[300]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[299]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[304]);
    }
    ++(vlSymsp->__Vcoverage[307]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[306]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 5U));
    } else {
        ++(vlSymsp->__Vcoverage[311]);
    }
    ++(vlSymsp->__Vcoverage[314]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[313]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 6U));
    } else {
        ++(vlSymsp->__Vcoverage[318]);
    }
    ++(vlSymsp->__Vcoverage[321]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[320]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 7U));
    } else {
        ++(vlSymsp->__Vcoverage[325]);
    }
    ++(vlSymsp->__Vcoverage[328]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[327]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 8U));
    } else {
        ++(vlSymsp->__Vcoverage[332]);
    }
    ++(vlSymsp->__Vcoverage[335]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[334]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 9U));
    } else {
        ++(vlSymsp->__Vcoverage[339]);
    }
    ++(vlSymsp->__Vcoverage[342]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[341]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xaU));
    } else {
        ++(vlSymsp->__Vcoverage[346]);
    }
    ++(vlSymsp->__Vcoverage[349]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[348]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xbU));
    } else {
        ++(vlSymsp->__Vcoverage[353]);
    }
    ++(vlSymsp->__Vcoverage[356]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[355]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xcU));
    } else {
        ++(vlSymsp->__Vcoverage[360]);
    }
    ++(vlSymsp->__Vcoverage[363]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[362]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xdU));
    } else {
        ++(vlSymsp->__Vcoverage[367]);
    }
    ++(vlSymsp->__Vcoverage[370]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[369]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xeU));
    } else {
        ++(vlSymsp->__Vcoverage[374]);
    }
    ++(vlSymsp->__Vcoverage[377]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[376]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__in) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.clk))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in 
            = (1U & ((IData)(vlSymsp->TOP.computer__DOT__cont0__DOT__mem_X) 
                     >> 0xfU));
    } else {
        ++(vlSymsp->__Vcoverage[381]);
    }
    ++(vlSymsp->__Vcoverage[384]);
    if (vlSymsp->TOP.clk) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out 
            = vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in;
    } else {
        ++(vlSymsp->__Vcoverage[383]);
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in;
    }
    if (((IData)(vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in) 
         ^ (IData)(vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__in))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__in 
            = vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in;
    }
}
