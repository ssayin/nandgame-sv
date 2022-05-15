// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer__Syms.h"
#include "Vcomputer___024root.h"

VL_INLINE_OPT void Vcomputer___024root___combo__TOP__0(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___combo__TOP__0\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xfffeU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (1U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xfffdU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (2U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xfffbU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (4U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xfff7U & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (8U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xffefU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x10U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xffdfU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x20U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xffbfU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x40U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xff7fU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x80U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xfeffU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x100U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xfdffU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x200U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xfbffU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x400U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xf7ffU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x800U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xefffU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x1000U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xdfffU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x2000U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0xbfffU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x4000U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->computer__DOT____Vtogcov__rom_in = 
            ((0x7fffU & (IData)(vlSelf->computer__DOT____Vtogcov__rom_in)) 
             | (0x8000U & (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out)));
    }
    ++(vlSymsp->__Vcoverage[272]);
    if ((0U == (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->computer__DOT__inst = 0x8fd0U;
    } else if ((1U == (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->computer__DOT__inst = 0x87d0U;
    } else if ((2U == (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->computer__DOT__inst = 1U;
    } else if ((3U == (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->computer__DOT__inst = 0x8007U;
    } else {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->computer__DOT__inst = 0U;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->computer__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->computer__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if ((1U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (1U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (2U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (4U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (8U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x10U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x20U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x40U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x80U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x100U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x200U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x400U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x800U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x1000U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x2000U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x4000U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__D 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__D)) 
               | (0x8000U & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__inst) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xfffeU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__inst) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xfffdU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__inst) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xfffbU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__inst) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xfff7U 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__inst) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xffefU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__inst) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xffdfU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__inst) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xffbfU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__inst) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xff7fU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__inst) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xfeffU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x100U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__inst) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xfdffU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x200U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__inst) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xfbffU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x400U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__inst) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xf7ffU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x800U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__inst) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xefffU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x1000U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__inst) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xdfffU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x2000U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__inst) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0xbfffU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x4000U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__inst) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__inst)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->computer__DOT____Vtogcov__inst = ((0x7fffU 
                                                   & (IData)(vlSelf->computer__DOT____Vtogcov__inst)) 
                                                  | (0x8000U 
                                                     & (IData)(vlSelf->computer__DOT__inst)));
    }
    vlSelf->computer__DOT__cont0__DOT__w = (((IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->computer__DOT__inst)))) 
                                             << 0xeU) 
                                            | (((IData)(
                                                        (0x2000U 
                                                         == 
                                                         (0xa000U 
                                                          & (IData)(vlSelf->computer__DOT__inst)))) 
                                                << 0xdU) 
                                               | (((IData)(
                                                           (0x1000U 
                                                            == 
                                                            (0x9000U 
                                                             & (IData)(vlSelf->computer__DOT__inst)))) 
                                                   << 0xcU) 
                                                  | (((IData)(
                                                              (0x800U 
                                                               == 
                                                               (0x8800U 
                                                                & (IData)(vlSelf->computer__DOT__inst)))) 
                                                      << 0xbU) 
                                                     | (((IData)(
                                                                 (0x400U 
                                                                  == 
                                                                  (0x8400U 
                                                                   & (IData)(vlSelf->computer__DOT__inst)))) 
                                                         << 0xaU) 
                                                        | (((IData)(
                                                                    (0x200U 
                                                                     == 
                                                                     (0x8200U 
                                                                      & (IData)(vlSelf->computer__DOT__inst)))) 
                                                            << 9U) 
                                                           | (((IData)(
                                                                       (0x100U 
                                                                        == 
                                                                        (0x8100U 
                                                                         & (IData)(vlSelf->computer__DOT__inst)))) 
                                                               << 8U) 
                                                              | (((IData)(
                                                                          (0x80U 
                                                                           == 
                                                                           (0x8080U 
                                                                            & (IData)(vlSelf->computer__DOT__inst)))) 
                                                                  << 7U) 
                                                                 | (((IData)(
                                                                             (0x40U 
                                                                              == 
                                                                              (0x8040U 
                                                                               & (IData)(vlSelf->computer__DOT__inst)))) 
                                                                     << 6U) 
                                                                    | (((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x8020U 
                                                                                & (IData)(vlSelf->computer__DOT__inst)))) 
                                                                        << 5U) 
                                                                       | (((IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x8010U 
                                                                                & (IData)(vlSelf->computer__DOT__inst)))) 
                                                                           << 4U) 
                                                                          | (((IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x8008U 
                                                                                & (IData)(vlSelf->computer__DOT__inst)))) 
                                                                              << 3U) 
                                                                             | (((IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x8004U 
                                                                                & (IData)(vlSelf->computer__DOT__inst)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x8002U 
                                                                                & (IData)(vlSelf->computer__DOT__inst)))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x8001U 
                                                                                & (IData)(vlSelf->computer__DOT__inst))))))))))))))))));
    vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__sm 
        = (IData)((0x9000U == (0x9000U & (IData)(vlSelf->computer__DOT__inst))));
    vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst 
        = (((IData)((0x8000U != (0x8020U & (IData)(vlSelf->computer__DOT__inst)))) 
            << 2U) | (((IData)((0x8010U == (0x8010U 
                                            & (IData)(vlSelf->computer__DOT__inst)))) 
                       << 1U) | (IData)((0x8008U == 
                                         (0x8008U & (IData)(vlSelf->computer__DOT__inst))))));
    vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j 
        = (((IData)((0x8004U == (0x8004U & (IData)(vlSelf->computer__DOT__inst)))) 
            << 2U) | (((IData)((0x8002U == (0x8002U 
                                            & (IData)(vlSelf->computer__DOT__inst)))) 
                       << 1U) | (IData)((0x8001U == 
                                         (0x8001U & (IData)(vlSelf->computer__DOT__inst))))));
    vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc 
        = (((((IData)((0x8800U == (0x8800U & (IData)(vlSelf->computer__DOT__inst)))) 
              << 5U) | ((IData)((0x8400U == (0x8400U 
                                             & (IData)(vlSelf->computer__DOT__inst)))) 
                        << 4U)) | (((IData)((0x8200U 
                                             == (0x8200U 
                                                 & (IData)(vlSelf->computer__DOT__inst)))) 
                                    << 3U) | ((IData)(
                                                      (0x8100U 
                                                       == 
                                                       (0x8100U 
                                                        & (IData)(vlSelf->computer__DOT__inst)))) 
                                              << 2U))) 
           | (((IData)((0x8080U == (0x8080U & (IData)(vlSelf->computer__DOT__inst)))) 
               << 1U) | (IData)((0x8040U == (0x8040U 
                                             & (IData)(vlSelf->computer__DOT__inst))))));
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__w) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__w 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__w)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__cont0__DOT__w)));
    }
    if (((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__sm) 
         ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__sm 
            = vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__sm;
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst 
            = ((3U & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst 
            = ((5U & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst)));
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst 
            = ((6U & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__dst)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j 
            = ((3U & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j 
            = ((5U & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j)));
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j 
            = ((6U & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__j)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc 
            = ((0x1fU & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc 
            = ((0x2fU & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc 
            = ((0x37U & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc 
            = ((0x3bU & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc 
            = ((0x3dU & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc)));
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc 
            = ((0x3eU & (IData)(vlSelf->computer__DOT__cont0__DOT__decoder__DOT____Vtogcov__opc)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc)));
    }
}

VL_INLINE_OPT void Vcomputer___024root___sequent__TOP__0(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[197]);
    vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out 
        = vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram
        [vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out];
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__A_star)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)));
    }
}

VL_INLINE_OPT void Vcomputer___024root___sequent__TOP__1(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __Vdlyvdim0__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0;
    SData/*15:0*/ __Vdlyvval__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0;
    // Body
    __Vdlyvset__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0 = 0U;
    ++(vlSymsp->__Vcoverage[196]);
    if ((8U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        ++(vlSymsp->__Vcoverage[194]);
        __Vdlyvval__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0 
            = vlSelf->computer__DOT__cont0__DOT__mem_X;
        __Vdlyvset__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0 
            = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out;
    } else {
        ++(vlSymsp->__Vcoverage[195]);
    }
    if (__Vdlyvset__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0) {
        vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram[__Vdlyvdim0__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0] 
            = __Vdlyvval__computer__DOT__cont0__DOT__mem__DOT__ram0__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vcomputer___024root___combo__TOP__1(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->computer__DOT__cont0__DOT__in = ((0x7fffU 
                                              & (IData)(vlSelf->computer__DOT__cont0__DOT__in)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->computer__DOT__inst)));
    vlSelf->computer__DOT__cont0__DOT__in = ((0xe000U 
                                              & (IData)(vlSelf->computer__DOT__cont0__DOT__in)) 
                                             | (((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__sm) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j)))));
    if ((1U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xfffeU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (1U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xfffdU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (2U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xfffbU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (4U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
               ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xfff7U 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (8U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xffefU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x10U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xffdfU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x20U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xffbfU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x40U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                  ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xff7fU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x80U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xfeffU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x100U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xfdffU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x200U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xfbffU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x400U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                   ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xf7ffU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x800U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xefffU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x1000U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xdfffU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x2000U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->computer__DOT____Vtogcov__A = ((0xbfffU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x4000U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out) 
                    ^ (IData)(vlSelf->computer__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->computer__DOT____Vtogcov__A = ((0x7fffU 
                                                & (IData)(vlSelf->computer__DOT____Vtogcov__A)) 
                                               | (0x8000U 
                                                  & (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 5U) ^ ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst 
            = ((3U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst)) 
               | (4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                        >> 3U)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 4U) ^ ((IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst 
            = ((5U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst)) 
               | (2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                        >> 3U)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 3U) ^ (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst 
            = ((6U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT____Vtogcov__dst)) 
               | (1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                        >> 3U)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j 
            = ((3U & (IData)(vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j 
            = ((5U & (IData)(vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j 
            = ((6U & (IData)(vlSelf->computer__DOT__cont0__DOT__cond0__DOT____Vtogcov__j)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 0xbU) ^ ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc) 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc 
            = ((0x1fU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc)) 
               | (0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                           >> 6U)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 0xaU) ^ ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc) 
                            >> 4U)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc 
            = ((0x2fU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc)) 
               | (0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                           >> 6U)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 9U) ^ ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc 
            = ((0x37U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc)) 
               | (8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                        >> 6U)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 8U) ^ ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc 
            = ((0x3bU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc)) 
               | (4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                        >> 6U)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 7U) ^ ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc 
            = ((0x3dU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc)) 
               | (2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                        >> 6U)));
    }
    if ((1U & (((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                >> 6U) ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc 
            = ((0x3eU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__opc)) 
               | (1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                        >> 6U)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__in 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__in)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__in)));
    }
    ++(vlSymsp->__Vcoverage[247]);
    if ((0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        if ((0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
            ++(vlSymsp->__Vcoverage[245]);
            vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X = 0xffffU;
        } else {
            ++(vlSymsp->__Vcoverage[244]);
            vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X = 0U;
        }
    } else if ((0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X 
            = (0xffffU & (~ (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out)));
    } else {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X 
            = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out;
    }
    vlSelf->computer__DOT__cont0__DOT__alu_Y = ((0x1000U 
                                                 & (IData)(vlSelf->computer__DOT__cont0__DOT__in))
                                                 ? (IData)(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out)
                                                 : (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out));
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__X)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X)));
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_Y)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    }
    ++(vlSymsp->__Vcoverage[253]);
    if ((0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        if ((0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
            ++(vlSymsp->__Vcoverage[251]);
            vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y = 0xffffU;
        } else {
            ++(vlSymsp->__Vcoverage[250]);
            vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y = 0U;
        }
    } else if ((0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y 
            = (0xffffU & (~ (IData)(vlSelf->computer__DOT__cont0__DOT__alu_Y)));
    } else {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y 
            = vlSelf->computer__DOT__cont0__DOT__alu_Y;
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT____Vtogcov__Y)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
    }
    ++(vlSymsp->__Vcoverage[241]);
    if ((0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        if ((0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
            ++(vlSymsp->__Vcoverage[239]);
            vlSelf->computer__DOT__cont0__DOT__alu_out 
                = (0xffffU & (~ ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                                 + (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y))));
        } else {
            ++(vlSymsp->__Vcoverage[238]);
            vlSelf->computer__DOT__cont0__DOT__alu_out 
                = (0xffffU & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                              + (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y)));
        }
    } else if ((0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->computer__DOT__cont0__DOT__alu_out 
            = (0xffffU & (~ ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
                             & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y))));
    } else {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->computer__DOT__cont0__DOT__alu_out 
            = ((IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X) 
               & (IData)(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y));
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__alu_out) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__alu_out)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    }
    vlSelf->computer__DOT__cont0__DOT__mem_X = ((0x8000U 
                                                 & (IData)(vlSelf->computer__DOT__cont0__DOT__in))
                                                 ? (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)
                                                 : (IData)(vlSelf->computer__DOT__cont0__DOT__w));
    ++(vlSymsp->__Vcoverage[266]);
    if ((4U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        if ((2U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
            if ((1U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
                ++(vlSymsp->__Vcoverage[264]);
                vlSelf->computer__DOT__jmp_if = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[263]);
                vlSelf->computer__DOT__jmp_if = VL_GTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
            }
        } else if ((1U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
            ++(vlSymsp->__Vcoverage[262]);
            vlSelf->computer__DOT__jmp_if = (0U != 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
        } else {
            ++(vlSymsp->__Vcoverage[261]);
            vlSelf->computer__DOT__jmp_if = VL_GTS_III(32, 0U, 
                                                       VL_EXTENDS_II(32,16, (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
        }
    } else if ((2U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        if ((1U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
            ++(vlSymsp->__Vcoverage[260]);
            vlSelf->computer__DOT__jmp_if = VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
        } else {
            ++(vlSymsp->__Vcoverage[259]);
            vlSelf->computer__DOT__jmp_if = (0U == 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
        }
    } else if ((1U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->computer__DOT__jmp_if = VL_LTS_III(32, 0U, 
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelf->computer__DOT__cont0__DOT__alu_out)));
    } else {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->computer__DOT__jmp_if = 0U;
    }
    if ((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (1U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (2U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (4U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
               ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (8U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                  ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                   ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                    ^ (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__cont0__DOT____Vtogcov__mem_X)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X)));
    }
    if (((IData)(vlSelf->computer__DOT__jmp_if) ^ (IData)(vlSelf->computer__DOT____Vtogcov__jmp_if))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->computer__DOT____Vtogcov__jmp_if = vlSelf->computer__DOT__jmp_if;
    }
    vlSelf->computer__DOT__pc__DOT__lb = (0xffffU & 
                                          ((IData)(vlSelf->computer__DOT__jmp_if)
                                            ? (IData)(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out)
                                            : ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__computer__DOT__pc__DOT__r.out))));
    if ((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
               ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xfffeU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (1U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((2U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
               ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xfffdU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (2U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((4U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
               ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xfffbU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (4U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((8U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
               ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xfff7U & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (8U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x10U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                  ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xffefU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x10U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x20U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                  ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xffdfU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x20U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x40U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                  ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xffbfU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x40U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x80U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                  ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xff7fU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x80U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x100U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                   ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xfeffU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x100U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x200U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                   ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xfdffU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x200U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x400U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                   ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xfbffU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x400U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x800U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                   ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xf7ffU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x800U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x1000U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                    ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xefffU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x1000U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x2000U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                    ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xdfffU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x2000U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x4000U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                    ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0xbfffU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x4000U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
    if ((0x8000U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                    ^ (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->computer__DOT__pc__DOT____Vtogcov__lb 
            = ((0x7fffU & (IData)(vlSelf->computer__DOT__pc__DOT____Vtogcov__lb)) 
               | (0x8000U & (IData)(vlSelf->computer__DOT__pc__DOT__lb)));
    }
}

void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__0(Vcomputer_regst* vlSelf);
void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0(Vcomputer_regst* vlSelf);
void Vcomputer_regst___combo__TOP__computer__DOT__pc__DOT__r__0(Vcomputer_regst* vlSelf);
void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__1(Vcomputer_regst* vlSelf);
void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__2(Vcomputer_regst* vlSelf);
void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__1(Vcomputer_regst* vlSelf);
void Vcomputer_regst___combo__TOP__computer__DOT__pc__DOT__r__1(Vcomputer_regst* vlSelf);

void Vcomputer___024root___eval(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___eval\n"); );
    // Body
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__0((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data));
    Vcomputer___024root___combo__TOP__0(vlSelf);
    Vcomputer_regst___combo__TOP__computer__DOT__pc__DOT__r__0((&vlSymsp->TOP__computer__DOT__pc__DOT__r));
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcomputer___024root___sequent__TOP__0(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vcomputer___024root___sequent__TOP__1(vlSelf);
    }
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__1((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr));
    Vcomputer___024root___combo__TOP__1(vlSelf);
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__2((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr));
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__1((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data));
    Vcomputer_regst___combo__TOP__computer__DOT__pc__DOT__r__1((&vlSymsp->TOP__computer__DOT__pc__DOT__r));
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_INLINE_OPT QData Vcomputer___024root___change_request_1(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__computer__DOT__pc__DOT__r.out ^ vlSelf->__Vchglast__TOP__computer__DOT__pc__DOT__r__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out)
        || (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out)
        || (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out)
        || (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out)
         | (vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__pc__DOT__r.out ^ vlSelf->__Vchglast__TOP__computer__DOT__pc__DOT__r__out))) VL_DBG_MSGF("        CHANGE: src/regst.sv:8: out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[0].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[1].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[2].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[3].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[4].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[5].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[6].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[7].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[8].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[9].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[10].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[11].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[12].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[13].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[14].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[15].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[0].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[1].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[2].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[3].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[4].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[5].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[6].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[7].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[8].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[9].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[10].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[11].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[12].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[13].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[14].ff0__out\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out ^ vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out))) VL_DBG_MSGF("        CHANGE: src/flipflop.sv:6: __Vcellout__gen_register_ff[15].ff0__out\n"); );
    // Final
    vlSelf->__Vchglast__TOP__computer__DOT__pc__DOT__r__out 
        = vlSymsp->TOP__computer__DOT__pc__DOT__r.out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out;
    vlSelf->__Vchglast__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data____Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out 
        = vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out;
    return __req;
}
