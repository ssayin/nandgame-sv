// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER___024UNIT_H_
#define VERILATED_VCOMPUTER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcomputer__Syms;
VL_MODULE(Vcomputer___024unit) {
  public:

    // INTERNAL VARIABLES
    Vcomputer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcomputer___024unit(const char* name);
    ~Vcomputer___024unit();
    VL_UNCOPYABLE(Vcomputer___024unit);

    // INTERNAL METHODS
    void __Vconfigure(Vcomputer__Syms* symsp, bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
