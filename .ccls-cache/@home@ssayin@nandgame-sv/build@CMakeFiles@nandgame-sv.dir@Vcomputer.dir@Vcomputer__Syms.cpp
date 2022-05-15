// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcomputer__Syms.h"
#include "Vcomputer.h"
#include "Vcomputer___024root.h"
#include "Vcomputer___024unit.h"
#include "Vcomputer_regst.h"

// FUNCTIONS
Vcomputer__Syms::~Vcomputer__Syms()
{
}

Vcomputer__Syms::Vcomputer__Syms(VerilatedContext* contextp, const char* namep,Vcomputer* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr(Verilated::catName(namep, "computer.cont0.mem.r_addr"))
    , TOP__computer__DOT__cont0__DOT__mem__DOT__r_data(Verilated::catName(namep, "computer.cont0.mem.r_data"))
    , TOP__computer__DOT__pc__DOT__r(Verilated::catName(namep, "computer.pc.r"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__computer__DOT__cont0__DOT__mem__DOT__r_addr = &TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr;
    TOP.__PVT__computer__DOT__cont0__DOT__mem__DOT__r_data = &TOP__computer__DOT__cont0__DOT__mem__DOT__r_data;
    TOP.__PVT__computer__DOT__pc__DOT__r = &TOP__computer__DOT__pc__DOT__r;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr.__Vconfigure(this, true);
    TOP__computer__DOT__cont0__DOT__mem__DOT__r_data.__Vconfigure(this, false);
    TOP__computer__DOT__pc__DOT__r.__Vconfigure(this, false);
}
