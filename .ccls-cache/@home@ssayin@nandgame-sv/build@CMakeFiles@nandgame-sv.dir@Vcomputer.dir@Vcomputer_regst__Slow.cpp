// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomputer.h for the primary calling header

#include "verilated.h"

#include "Vcomputer__Syms.h"
#include "Vcomputer_regst.h"

void Vcomputer_regst___ctor_var_reset(Vcomputer_regst* vlSelf);

Vcomputer_regst::Vcomputer_regst(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcomputer_regst___ctor_var_reset(this);
}

void Vcomputer_regst___configure_coverage(Vcomputer_regst* vlSelf, bool first);

void Vcomputer_regst::__Vconfigure(Vcomputer__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vcomputer_regst___configure_coverage(this, first);
}

Vcomputer_regst::~Vcomputer_regst() {
}

// Coverage
void Vcomputer_regst::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
