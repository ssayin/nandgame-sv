// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer_regst.h"

VL_ATTR_COLD void Vcomputer_regst___ctor_var_reset(Vcomputer_regst* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcomputer_regst___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->st = VL_RAND_RESET_I(1);
    vlSelf->d = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__st = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__d = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__in = VL_RAND_RESET_I(1);
}
