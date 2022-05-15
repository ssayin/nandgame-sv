// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMPUTER__SYMS_H_
#define VERILATED_VCOMPUTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcomputer.h"

// INCLUDE MODULE CLASSES
#include "Vcomputer___024root.h"
#include "Vcomputer___024unit.h"
#include "Vcomputer_regst.h"

// SYMS CLASS (contains all model state)
class Vcomputer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcomputer* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcomputer___024root            TOP;
    Vcomputer_regst                TOP__computer__DOT__cont0__DOT__mem__DOT__r_addr;
    Vcomputer_regst                TOP__computer__DOT__cont0__DOT__mem__DOT__r_data;
    Vcomputer_regst                TOP__computer__DOT__pc__DOT__r;

    // COVERAGE
    uint32_t __Vcoverage[385];

    // CONSTRUCTORS
    Vcomputer__Syms(VerilatedContext* contextp, const char* namep, Vcomputer* modelp);
    ~Vcomputer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
