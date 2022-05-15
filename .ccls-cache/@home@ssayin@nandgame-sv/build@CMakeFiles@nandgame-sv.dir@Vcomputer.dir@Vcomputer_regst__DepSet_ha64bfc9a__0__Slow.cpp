// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer__Syms.h"
#include "Vcomputer_regst.h"

VL_ATTR_COLD void Vcomputer_regst___settle__TOP__computer__DOT__pc__DOT__r__0(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___settle__TOP__computer__DOT__pc__DOT__r__0\n"); );
    // Body
    if ((1U ^ ((IData)(vlSymsp->TOP.clk) ^ (IData)(vlSelf->__Vtogcov__st)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->__Vtogcov__st = (1U & (~ (IData)(vlSymsp->TOP.clk)));
    }
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

VL_ATTR_COLD void Vcomputer_regst___configure_coverage(Vcomputer_regst* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/regst.sv", 5, 17, "", "v_toggle/regst", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/regst.sv", 6, 17, "", "v_toggle/regst", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "src/regst.sv", 7, 31, "", "v_toggle/regst", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "src/regst.sv", 8, 32, "", "v_toggle/regst", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[0].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[0].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[0].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[0].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[0].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[0].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[0].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[0].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[0].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[0].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[1].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[1].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[1].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[1].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[1].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[1].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[1].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[1].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[1].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[1].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[2].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[2].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[2].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[2].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[2].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[2].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[2].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[2].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[2].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[2].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[3].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[3].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[3].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[3].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[3].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[3].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[3].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[3].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[3].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[3].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[4].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[4].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[4].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[4].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[4].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[4].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[4].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[4].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[4].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[4].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[5].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[5].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[5].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[5].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[5].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[5].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[5].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[5].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[5].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[5].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[6].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[6].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[6].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[6].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[6].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[6].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[6].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[6].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[6].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[6].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[7].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[7].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[7].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[7].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[7].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[7].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[7].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[7].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[7].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[7].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[8].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[8].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[8].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[8].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[8].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[8].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[8].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[8].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[8].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[8].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[9].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[9].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[9].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[9].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[9].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[9].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[9].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[9].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[9].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[9].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[10].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[10].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[10].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[10].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[10].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[10].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[10].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[10].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[10].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[10].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[11].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[11].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[11].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[11].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[11].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[11].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[11].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[11].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[11].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[11].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[12].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[12].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[12].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[12].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[12].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[12].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[12].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[12].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[12].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[12].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[13].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[13].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[13].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[13].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[13].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[13].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[13].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[13].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[13].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[13].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[14].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[14].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[14].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[14].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[14].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[14].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[14].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[14].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[14].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[14].ff0", "v_line/flipflop", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 3, 18, ".gen_register_ff[15].ff0", "v_toggle/flipflop", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/flipflop.sv", 4, 18, ".gen_register_ff[15].ff0", "v_toggle/flipflop", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/flipflop.sv", 5, 18, ".gen_register_ff[15].ff0", "v_toggle/flipflop", "d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "src/flipflop.sv", 6, 18, ".gen_register_ff[15].ff0", "v_toggle/flipflop", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "src/flipflop.sv", 9, 9, ".gen_register_ff[15].ff0", "v_toggle/flipflop", "in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "src/flipflop.sv", 11, 5, ".gen_register_ff[15].ff0", "v_branch/flipflop", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "src/flipflop.sv", 11, 6, ".gen_register_ff[15].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "src/flipflop.sv", 12, 5, ".gen_register_ff[15].ff0", "v_branch/flipflop", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "src/flipflop.sv", 12, 6, ".gen_register_ff[15].ff0", "v_branch/flipflop", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "src/flipflop.sv", 10, 3, ".gen_register_ff[15].ff0", "v_line/flipflop", "block", "10");
}
