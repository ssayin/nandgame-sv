// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer__Syms.h"
#include "Vcomputer___024root.h"

VL_ATTR_COLD void Vcomputer___024root___settle__TOP__0(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___settle__TOP__0\n"); );
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
    vlSelf->computer__DOT__cont0__DOT__in = ((0x7fffU 
                                              & (IData)(vlSelf->computer__DOT__cont0__DOT__in)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->computer__DOT__inst)));
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
    vlSelf->computer__DOT__cont0__DOT__in = ((0xefffU 
                                              & (IData)(vlSelf->computer__DOT__cont0__DOT__in)) 
                                             | ((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__sm) 
                                                << 0xcU));
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
    vlSelf->computer__DOT__cont0__DOT__in = ((0xf000U 
                                              & (IData)(vlSelf->computer__DOT__cont0__DOT__in)) 
                                             | (((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j))));
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

void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0(Vcomputer_regst* vlSelf);
VL_ATTR_COLD void Vcomputer_regst___settle__TOP__computer__DOT__pc__DOT__r__0(Vcomputer_regst* vlSelf);
void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__2(Vcomputer_regst* vlSelf);
void Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__1(Vcomputer_regst* vlSelf);

VL_ATTR_COLD void Vcomputer___024root___eval_settle(Vcomputer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___eval_settle\n"); );
    // Body
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__0((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data));
    Vcomputer___024root___settle__TOP__0(vlSelf);
    Vcomputer_regst___settle__TOP__computer__DOT__pc__DOT__r__0((&vlSymsp->TOP__computer__DOT__pc__DOT__r));
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr__2((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr));
    Vcomputer_regst___combo__TOP__computer__DOT__cont0__DOT__mem__DOT__r_data__1((&vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data));
}

VL_ATTR_COLD void Vcomputer___024root___configure_coverage(Vcomputer___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/computer.sv", 22, 17, ".computer", "v_toggle/computer", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "src/computer.sv", 25, 9, ".computer", "v_toggle/computer", "jmp_if", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "src/computer.sv", 26, 16, ".computer", "v_toggle/computer", "A[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "src/computer.sv", 27, 16, ".computer", "v_toggle/computer", "rom_in[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "src/computer.sv", 28, 16, ".computer", "v_toggle/computer", "inst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/counter.sv", 4, 17, ".computer.pc", "v_toggle/counter", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "src/counter.sv", 5, 17, ".computer.pc", "v_toggle/counter", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "src/counter.sv", 6, 31, ".computer.pc", "v_toggle/counter", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "src/counter.sv", 7, 32, ".computer.pc", "v_toggle/counter", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "src/counter.sv", 10, 23, ".computer.pc", "v_toggle/counter", "lb[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/control.sv", 2, 17, ".computer.cont0", "v_toggle/control", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.kind", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.ignored[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.ignored[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.sm", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.opc.zx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.opc.nx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.opc.zy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.opc.ny", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.opc.f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.opc.no", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.dst.a", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.dst.d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.dst.a_star", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.j.lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.j.eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "src/control.sv", 3, 23, ".computer.cont0", "v_toggle/control", "inst.j.gt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "src/control.sv", 4, 18, ".computer.cont0", "v_toggle/control", "jmp_if", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "src/control.sv", 5, 25, ".computer.cont0", "v_toggle/control", "A[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.kind", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.ignored[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.ignored[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.sm", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.opc.zx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.opc.nx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.opc.zy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.opc.ny", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.opc.f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.opc.no", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.dst.a", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.dst.d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.dst.a_star", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.j.lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.j.eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "src/control.sv", 8, 15, ".computer.cont0", "v_toggle/control", "in.j.gt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "src/control.sv", 9, 18, ".computer.cont0", "v_toggle/control", "w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "src/control.sv", 10, 18, ".computer.cont0", "v_toggle/control", "mem_X[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "src/control.sv", 11, 18, ".computer.cont0", "v_toggle/control", "alu_Y[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "src/control.sv", 12, 18, ".computer.cont0", "v_toggle/control", "alu_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "src/control.sv", 14, 18, ".computer.cont0", "v_toggle/control", "D[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "src/control.sv", 15, 18, ".computer.cont0", "v_toggle/control", "A_star[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.kind", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.ignored[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.ignored[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.sm", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.opc.zx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.opc.nx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.opc.zy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.opc.ny", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.opc.f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.opc.no", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.dst.a", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.dst.d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.dst.a_star", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.j.lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.j.eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "src/inst_decoder.sv", 2, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "inst.j.gt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "src/inst_decoder.sv", 3, 18, ".computer.cont0.decoder", "v_toggle/inst_decoder", "ci", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "src/inst_decoder.sv", 4, 18, ".computer.cont0.decoder", "v_toggle/inst_decoder", "sm", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "src/inst_decoder.sv", 5, 22, ".computer.cont0.decoder", "v_toggle/inst_decoder", "opc.zx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "src/inst_decoder.sv", 5, 22, ".computer.cont0.decoder", "v_toggle/inst_decoder", "opc.nx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "src/inst_decoder.sv", 5, 22, ".computer.cont0.decoder", "v_toggle/inst_decoder", "opc.zy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "src/inst_decoder.sv", 5, 22, ".computer.cont0.decoder", "v_toggle/inst_decoder", "opc.ny", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "src/inst_decoder.sv", 5, 22, ".computer.cont0.decoder", "v_toggle/inst_decoder", "opc.f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "src/inst_decoder.sv", 5, 22, ".computer.cont0.decoder", "v_toggle/inst_decoder", "opc.no", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "src/inst_decoder.sv", 6, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "dst.a", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "src/inst_decoder.sv", 6, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "dst.d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "src/inst_decoder.sv", 6, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "dst.a_star", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "src/inst_decoder.sv", 7, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "j.lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "src/inst_decoder.sv", 7, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "j.eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "src/inst_decoder.sv", 7, 23, ".computer.cont0.decoder", "v_toggle/inst_decoder", "j.gt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "src/inst_decoder.sv", 8, 27, ".computer.cont0.decoder", "v_toggle/inst_decoder", "w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/combined_memory.sv", 6, 17, ".computer.cont0.mem", "v_toggle/combined_memory", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "src/combined_memory.sv", 7, 22, ".computer.cont0.mem", "v_toggle/combined_memory", "dst.a", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/combined_memory.sv", 7, 22, ".computer.cont0.mem", "v_toggle/combined_memory", "dst.d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "src/combined_memory.sv", 7, 22, ".computer.cont0.mem", "v_toggle/combined_memory", "dst.a_star", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "src/combined_memory.sv", 8, 31, ".computer.cont0.mem", "v_toggle/combined_memory", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "src/combined_memory.sv", 9, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "src/combined_memory.sv", 10, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "D[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "src/combined_memory.sv", 11, 32, ".computer.cont0.mem", "v_toggle/combined_memory", "A_star[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "src/combined_memory.sv", 14, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_addr_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "src/combined_memory.sv", 15, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "r_data_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "src/combined_memory.sv", 16, 25, ".computer.cont0.mem", "v_toggle/combined_memory", "ram_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/ram.sv", 5, 17, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "src/ram.sv", 6, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "src/ram.sv", 7, 17, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "st", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "src/ram.sv", 8, 36, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "src/ram.sv", 9, 37, ".computer.cont0.mem.ram0", "v_toggle/ram__D10_A10", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "src/ram.sv", 15, 5, ".computer.cont0.mem.ram0", "v_branch/ram__D10_A10", "if", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "src/ram.sv", 15, 6, ".computer.cont0.mem.ram0", "v_branch/ram__D10_A10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "src/ram.sv", 14, 3, ".computer.cont0.mem.ram0", "v_line/ram__D10_A10", "block", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "src/ram.sv", 17, 3, ".computer.cont0.mem.ram0", "v_line/ram__D10_A10", "block", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "src/mux2.sv", 4, 17, ".computer.cont0.mux2_sm", "v_toggle/mux2", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_sm", "v_toggle/mux2", "d1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_sm", "v_toggle/mux2", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "src/mux2.sv", 4, 17, ".computer.cont0.mux2_ci", "v_toggle/mux2", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "src/mux2.sv", 5, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "src/mux2.sv", 6, 33, ".computer.cont0.mux2_ci", "v_toggle/mux2", "d1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "src/mux2.sv", 7, 34, ".computer.cont0.mux2_ci", "v_toggle/mux2", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "src/alu.sv", 4, 21, ".computer.cont0.alu0", "v_toggle/alu", "opc.zx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "src/alu.sv", 4, 21, ".computer.cont0.alu0", "v_toggle/alu", "opc.nx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "src/alu.sv", 4, 21, ".computer.cont0.alu0", "v_toggle/alu", "opc.zy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "src/alu.sv", 4, 21, ".computer.cont0.alu0", "v_toggle/alu", "opc.ny", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "src/alu.sv", 4, 21, ".computer.cont0.alu0", "v_toggle/alu", "opc.f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "src/alu.sv", 4, 21, ".computer.cont0.alu0", "v_toggle/alu", "opc.no", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "src/alu.sv", 5, 33, ".computer.cont0.alu0", "v_toggle/alu", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "src/alu.sv", 6, 33, ".computer.cont0.alu0", "v_toggle/alu", "y[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "src/alu.sv", 7, 34, ".computer.cont0.alu0", "v_toggle/alu", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "src/alu.sv", 10, 25, ".computer.cont0.alu0", "v_toggle/alu", "X[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "src/alu.sv", 11, 25, ".computer.cont0.alu0", "v_toggle/alu", "Y[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "src/alu.sv", 31, 12, ".computer.cont0.alu0", "v_line/alu", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "src/alu.sv", 32, 12, ".computer.cont0.alu0", "v_line/alu", "case", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "src/alu.sv", 33, 12, ".computer.cont0.alu0", "v_line/alu", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "src/alu.sv", 34, 12, ".computer.cont0.alu0", "v_line/alu", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "src/alu.sv", 35, 7, ".computer.cont0.alu0", "v_line/alu", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "src/alu.sv", 27, 3, ".computer.cont0.alu0", "v_line/alu", "block", "27-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "src/unary_alu.sv", 4, 17, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "z", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "src/unary_alu.sv", 5, 17, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a0", "v_toggle/unary_alu", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "src/unary_alu.sv", 14, 12, ".computer.cont0.alu0.a0", "v_line/unary_alu", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "src/unary_alu.sv", 15, 12, ".computer.cont0.alu0.a0", "v_line/unary_alu", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "src/unary_alu.sv", 16, 12, ".computer.cont0.alu0.a0", "v_line/unary_alu", "case", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "src/unary_alu.sv", 17, 12, ".computer.cont0.alu0.a0", "v_line/unary_alu", "case", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "src/unary_alu.sv", 18, 7, ".computer.cont0.alu0.a0", "v_line/unary_alu", "case", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "src/unary_alu.sv", 10, 3, ".computer.cont0.alu0.a0", "v_line/unary_alu", "block", "10-12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "src/unary_alu.sv", 4, 17, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "z", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "src/unary_alu.sv", 5, 17, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "src/unary_alu.sv", 6, 31, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "src/unary_alu.sv", 7, 32, ".computer.cont0.alu0.a1", "v_toggle/unary_alu", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "src/unary_alu.sv", 14, 12, ".computer.cont0.alu0.a1", "v_line/unary_alu", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "src/unary_alu.sv", 15, 12, ".computer.cont0.alu0.a1", "v_line/unary_alu", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "src/unary_alu.sv", 16, 12, ".computer.cont0.alu0.a1", "v_line/unary_alu", "case", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "src/unary_alu.sv", 17, 12, ".computer.cont0.alu0.a1", "v_line/unary_alu", "case", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "src/unary_alu.sv", 18, 7, ".computer.cont0.alu0.a1", "v_line/unary_alu", "case", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "src/unary_alu.sv", 10, 3, ".computer.cont0.alu0.a1", "v_line/unary_alu", "block", "10-12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "src/condition.sv", 4, 22, ".computer.cont0.cond0", "v_toggle/condition", "j.lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "src/condition.sv", 4, 22, ".computer.cont0.cond0", "v_toggle/condition", "j.eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "src/condition.sv", 4, 22, ".computer.cont0.cond0", "v_toggle/condition", "j.gt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "src/condition.sv", 5, 33, ".computer.cont0.cond0", "v_toggle/condition", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "src/condition.sv", 6, 18, ".computer.cont0.cond0", "v_toggle/condition", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "src/condition.sv", 13, 13, ".computer.cont0.cond0", "v_line/condition", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "src/condition.sv", 14, 13, ".computer.cont0.cond0", "v_line/condition", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "src/condition.sv", 15, 13, ".computer.cont0.cond0", "v_line/condition", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "src/condition.sv", 16, 13, ".computer.cont0.cond0", "v_line/condition", "case", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "src/condition.sv", 17, 13, ".computer.cont0.cond0", "v_line/condition", "case", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "src/condition.sv", 18, 13, ".computer.cont0.cond0", "v_line/condition", "case", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "src/condition.sv", 19, 13, ".computer.cont0.cond0", "v_line/condition", "case", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "src/condition.sv", 20, 13, ".computer.cont0.cond0", "v_line/condition", "case", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "src/condition.sv", 21, 7, ".computer.cont0.cond0", "v_line/condition", "case", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "src/condition.sv", 9, 3, ".computer.cont0.cond0", "v_line/condition", "block", "9-11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "src/computer.sv", 6, 25, ".computer.rom0", "v_toggle/rom", "addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "src/computer.sv", 7, 25, ".computer.rom0", "v_toggle/rom", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "src/computer.sv", 12, 8, ".computer.rom0", "v_line/rom", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "src/computer.sv", 13, 8, ".computer.rom0", "v_line/rom", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "src/computer.sv", 14, 8, ".computer.rom0", "v_line/rom", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "src/computer.sv", 15, 8, ".computer.rom0", "v_line/rom", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "src/computer.sv", 16, 7, ".computer.rom0", "v_line/rom", "case", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "src/computer.sv", 10, 3, ".computer.rom0", "v_line/rom", "block", "10-11");
}
