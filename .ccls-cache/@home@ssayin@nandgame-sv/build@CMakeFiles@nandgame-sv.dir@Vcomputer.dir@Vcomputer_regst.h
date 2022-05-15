// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER_REGST_H_
#define VERILATED_VCOMPUTER_REGST_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcomputer__Syms;
VL_MODULE(Vcomputer_regst) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(st,0,0);
        CData/*0:0*/ __Vtogcov__st;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out;
        CData/*0:0*/ __Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__0__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__1__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__2__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__3__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__4__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__5__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__6__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__7__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__8__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__9__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__10__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in;
    };
    struct {
        CData/*0:0*/ gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__11__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__12__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__13__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__14__KET____DOT__ff0__DOT____Vtogcov__in;
        CData/*0:0*/ __PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in;
        CData/*0:0*/ gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__d;
        CData/*0:0*/ gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__out;
        CData/*0:0*/ gen_register_ff__BRA__15__KET____DOT__ff0__DOT____Vtogcov__in;
        VL_IN16(d,15,0);
        VL_OUT16(out,15,0);
    };

    // INTERNAL VARIABLES
    Vcomputer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcomputer_regst(const char* name);
    ~Vcomputer_regst();
    VL_UNCOPYABLE(Vcomputer_regst);

    // INTERNAL METHODS
    void __Vconfigure(Vcomputer__Syms* symsp, bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
