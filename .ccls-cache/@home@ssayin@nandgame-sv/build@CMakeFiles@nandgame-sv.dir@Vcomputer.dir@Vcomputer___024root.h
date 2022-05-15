// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER___024ROOT_H_
#define VERILATED_VCOMPUTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcomputer__Syms;
class Vcomputer_regst;

VL_MODULE(Vcomputer___024root) {
  public:
    // CELLS
    Vcomputer_regst* __PVT__computer__DOT__pc__DOT__r;
    Vcomputer_regst* __PVT__computer__DOT__cont0__DOT__mem__DOT__r_addr;
    Vcomputer_regst* __PVT__computer__DOT__cont0__DOT__mem__DOT__r_data;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ computer__DOT__jmp_if;
        CData/*0:0*/ computer__DOT____Vtogcov__clk;
        CData/*0:0*/ computer__DOT____Vtogcov__jmp_if;
        CData/*2:0*/ computer__DOT__cont0__DOT____Vcellout__decoder__j;
        CData/*2:0*/ computer__DOT__cont0__DOT____Vcellout__decoder__dst;
        CData/*5:0*/ computer__DOT__cont0__DOT____Vcellout__decoder__opc;
        CData/*0:0*/ computer__DOT__cont0__DOT____Vcellout__decoder__sm;
        CData/*0:0*/ computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__sm;
        CData/*5:0*/ computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc;
        CData/*2:0*/ computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst;
        CData/*2:0*/ computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j;
        CData/*2:0*/ computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst;
        CData/*5:0*/ computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc;
        CData/*2:0*/ computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out;
        CData/*0:0*/ __Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out;
        SData/*15:0*/ computer__DOT__inst;
        SData/*15:0*/ computer__DOT____Vtogcov__A;
        SData/*15:0*/ computer__DOT____Vtogcov__rom_in;
        SData/*15:0*/ computer__DOT____Vtogcov__inst;
        SData/*15:0*/ computer__DOT__pc__DOT__lb;
        SData/*15:0*/ computer__DOT__pc__DOT____Vtogcov__lb;
        SData/*15:0*/ computer__DOT__cont0__DOT__in;
        SData/*15:0*/ computer__DOT__cont0__DOT__w;
        SData/*15:0*/ computer__DOT__cont0__DOT__mem_X;
        SData/*15:0*/ computer__DOT__cont0__DOT__alu_Y;
        SData/*15:0*/ computer__DOT__cont0__DOT__alu_out;
        SData/*15:0*/ computer__DOT__cont0__DOT____Vtogcov__in;
        SData/*15:0*/ computer__DOT__cont0__DOT____Vtogcov__w;
        SData/*15:0*/ computer__DOT__cont0__DOT____Vtogcov__mem_X;
        SData/*15:0*/ computer__DOT__cont0__DOT____Vtogcov__alu_Y;
        SData/*15:0*/ computer__DOT__cont0__DOT____Vtogcov__alu_out;
    };
    struct {
        SData/*15:0*/ computer__DOT__cont0__DOT____Vtogcov__D;
        SData/*15:0*/ computer__DOT__cont0__DOT____Vtogcov__A_star;
        SData/*15:0*/ computer__DOT__cont0__DOT__mem__DOT__ram_out;
        SData/*15:0*/ computer__DOT__cont0__DOT__alu0__DOT__X;
        SData/*15:0*/ computer__DOT__cont0__DOT__alu0__DOT__Y;
        SData/*15:0*/ computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X;
        SData/*15:0*/ computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y;
        SData/*15:0*/ __Vchglast__TOP__computer__DOT__pc__DOT__r__out;
        VlUnpacked<SData/*15:0*/, 65536> computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vcomputer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcomputer___024root(const char* name);
    ~Vcomputer___024root();
    VL_UNCOPYABLE(Vcomputer___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vcomputer__Syms* symsp, bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
