// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer__Syms.h"
#include "Vcomputer___024unit.h"

void Vcomputer___024unit___ctor_var_reset(Vcomputer___024unit* vlSelf);

Vcomputer___024unit::Vcomputer___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcomputer___024unit___ctor_var_reset(this);
}

void Vcomputer___024unit___configure_coverage(Vcomputer___024unit* vlSelf, bool first);

void Vcomputer___024unit::__Vconfigure(Vcomputer__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vcomputer___024unit___configure_coverage(this, first);
}

Vcomputer___024unit::~Vcomputer___024unit() {
}

// Coverage
void Vcomputer___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
