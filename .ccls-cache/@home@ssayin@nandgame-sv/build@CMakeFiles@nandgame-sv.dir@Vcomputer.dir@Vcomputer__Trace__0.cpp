// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcomputer__Syms.h"


void Vcomputer___024root__trace_chg_sub_0(Vcomputer___024root* vlSelf, VerilatedVcd* tracep);

void Vcomputer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_chg_top_0\n"); );
    // Init
    Vcomputer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomputer___024root*>(voidSelf);
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcomputer___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vcomputer___024root__trace_chg_sub_0(Vcomputer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->computer__DOT__jmp_if));
        tracep->chgSData(oldp+1,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.out),16);
        tracep->chgSData(oldp+2,(vlSymsp->TOP__computer__DOT__pc__DOT__r.out),16);
        tracep->chgSData(oldp+3,(vlSelf->computer__DOT__inst),16);
        tracep->chgSData(oldp+4,(vlSelf->computer__DOT__cont0__DOT__in),16);
        tracep->chgSData(oldp+5,(vlSelf->computer__DOT__cont0__DOT__w),16);
        tracep->chgSData(oldp+6,(vlSelf->computer__DOT__cont0__DOT__mem_X),16);
        tracep->chgSData(oldp+7,(vlSelf->computer__DOT__cont0__DOT__alu_Y),16);
        tracep->chgSData(oldp+8,(vlSelf->computer__DOT__cont0__DOT__alu_out),16);
        tracep->chgSData(oldp+9,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.out),16);
        tracep->chgCData(oldp+10,((0x3fU & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                            >> 6U))),6);
        tracep->chgSData(oldp+11,(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__X),16);
        tracep->chgSData(oldp+12,(vlSelf->computer__DOT__cont0__DOT__alu0__DOT__Y),16);
        tracep->chgBit(oldp+13,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                       >> 0xbU))));
        tracep->chgBit(oldp+14,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+15,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                       >> 9U))));
        tracep->chgBit(oldp+16,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                       >> 8U))));
        tracep->chgCData(oldp+17,((7U & (IData)(vlSelf->computer__DOT__cont0__DOT__in))),3);
        tracep->chgBit(oldp+18,((1U & ((IData)(vlSelf->computer__DOT__inst) 
                                       >> 0xfU))));
        tracep->chgBit(oldp+19,(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__sm));
        tracep->chgCData(oldp+20,(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__opc),6);
        tracep->chgCData(oldp+21,(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__dst),3);
        tracep->chgCData(oldp+22,(vlSelf->computer__DOT__cont0__DOT____Vcellout__decoder__j),3);
        tracep->chgCData(oldp+23,((7U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                         >> 3U))),3);
        tracep->chgBit(oldp+24,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                       >> 3U))));
        tracep->chgBit(oldp+25,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                       >> 0xfU))));
        tracep->chgBit(oldp+26,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                       >> 0xcU))));
        tracep->chgSData(oldp+27,(vlSelf->computer__DOT__pc__DOT__lb),16);
        tracep->chgBit(oldp+28,((1U & (IData)(vlSelf->computer__DOT__pc__DOT__lb))));
        tracep->chgBit(oldp+29,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out));
        tracep->chgBit(oldp+30,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+31,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+32,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out));
        tracep->chgBit(oldp+33,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+34,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 0xbU))));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out));
        tracep->chgBit(oldp+36,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+37,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 0xcU))));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out));
        tracep->chgBit(oldp+39,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+40,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 0xdU))));
        tracep->chgBit(oldp+41,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out));
        tracep->chgBit(oldp+42,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+43,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 0xeU))));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+46,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 0xfU))));
        tracep->chgBit(oldp+47,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out));
        tracep->chgBit(oldp+48,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+49,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 1U))));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out));
        tracep->chgBit(oldp+51,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+52,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 2U))));
        tracep->chgBit(oldp+53,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+55,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 3U))));
        tracep->chgBit(oldp+56,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out));
        tracep->chgBit(oldp+57,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+58,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 4U))));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out));
        tracep->chgBit(oldp+60,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+61,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 5U))));
        tracep->chgBit(oldp+62,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out));
        tracep->chgBit(oldp+63,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+64,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 6U))));
        tracep->chgBit(oldp+65,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+67,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 7U))));
        tracep->chgBit(oldp+68,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out));
        tracep->chgBit(oldp+69,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+70,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 8U))));
        tracep->chgBit(oldp+71,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out));
        tracep->chgBit(oldp+72,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+73,((1U & ((IData)(vlSelf->computer__DOT__pc__DOT__lb) 
                                       >> 9U))));
        tracep->chgBit(oldp+74,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out));
        tracep->chgBit(oldp+75,(vlSymsp->TOP__computer__DOT__pc__DOT__r.__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+76,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                       >> 5U))));
        tracep->chgBit(oldp+77,((1U & (IData)(vlSelf->computer__DOT__cont0__DOT__mem_X))));
        tracep->chgBit(oldp+78,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+80,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+83,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                       >> 0xbU))));
        tracep->chgBit(oldp+84,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+86,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                       >> 0xcU))));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+89,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                       >> 0xdU))));
        tracep->chgBit(oldp+90,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+92,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                       >> 0xeU))));
        tracep->chgBit(oldp+93,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+95,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                       >> 0xfU))));
        tracep->chgBit(oldp+96,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out));
        tracep->chgBit(oldp+97,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+98,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                       >> 1U))));
        tracep->chgBit(oldp+99,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+101,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                        >> 2U))));
        tracep->chgBit(oldp+102,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+104,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                        >> 3U))));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+107,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                        >> 4U))));
        tracep->chgBit(oldp+108,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+110,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                        >> 5U))));
        tracep->chgBit(oldp+111,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+113,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                        >> 6U))));
        tracep->chgBit(oldp+114,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+116,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                        >> 7U))));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+119,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                        >> 8U))));
        tracep->chgBit(oldp+120,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+122,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__mem_X) 
                                        >> 9U))));
        tracep->chgBit(oldp+123,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+125,((1U & ((IData)(vlSelf->computer__DOT__cont0__DOT__in) 
                                        >> 4U))));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__0__KET____DOT__ff0__out));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__0__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+128,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__10__KET____DOT__ff0__out));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__10__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+130,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__11__KET____DOT__ff0__out));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__11__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+132,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__12__KET____DOT__ff0__out));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__12__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+134,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__13__KET____DOT__ff0__out));
        tracep->chgBit(oldp+135,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__13__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__14__KET____DOT__ff0__out));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__14__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+138,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__15__KET____DOT__ff0__out));
        tracep->chgBit(oldp+139,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__15__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__1__KET____DOT__ff0__out));
        tracep->chgBit(oldp+141,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__1__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__2__KET____DOT__ff0__out));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__2__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+144,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__3__KET____DOT__ff0__out));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__3__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+146,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__4__KET____DOT__ff0__out));
        tracep->chgBit(oldp+147,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__4__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+148,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__5__KET____DOT__ff0__out));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__5__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+150,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__6__KET____DOT__ff0__out));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__6__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+152,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__7__KET____DOT__ff0__out));
        tracep->chgBit(oldp+153,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__7__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__8__KET____DOT__ff0__out));
        tracep->chgBit(oldp+155,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__8__KET____DOT__ff0__DOT__in));
        tracep->chgBit(oldp+156,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vcellout__gen_register_ff__BRA__9__KET____DOT__ff0__out));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__PVT__gen_register_ff__BRA__9__KET____DOT__ff0__DOT__in));
    }
    tracep->chgBit(oldp+158,(vlSelf->clk));
    tracep->chgSData(oldp+159,(vlSelf->computer__DOT__cont0__DOT__mem__DOT__ram_out),16);
    tracep->chgBit(oldp+160,((1U & (~ (IData)(vlSelf->clk)))));
}

void Vcomputer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomputer___024root__trace_cleanup\n"); );
    // Init
    Vcomputer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomputer___024root*>(voidSelf);
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
