// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcomputer.h"
#include "Vcomputer__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcomputer::Vcomputer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcomputer__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , __PVT__computer__DOT__pc__DOT__r{vlSymsp->TOP.__PVT__computer__DOT__pc__DOT__r}
    , __PVT__computer__DOT__cont0__DOT__mem__DOT__r_addr{vlSymsp->TOP.__PVT__computer__DOT__cont0__DOT__mem__DOT__r_addr}
    , __PVT__computer__DOT__cont0__DOT__mem__DOT__r_data{vlSymsp->TOP.__PVT__computer__DOT__cont0__DOT__mem__DOT__r_data}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcomputer::Vcomputer(const char* _vcname__)
    : Vcomputer(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcomputer::~Vcomputer() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcomputer___024root___eval_initial(Vcomputer___024root* vlSelf);
void Vcomputer___024root___eval_settle(Vcomputer___024root* vlSelf);
void Vcomputer___024root___eval(Vcomputer___024root* vlSelf);
QData Vcomputer___024root___change_request(Vcomputer___024root* vlSelf);
#ifdef VL_DEBUG
void Vcomputer___024root___eval_debug_assertions(Vcomputer___024root* vlSelf);
#endif  // VL_DEBUG
void Vcomputer___024root___final(Vcomputer___024root* vlSelf);

static void _eval_initial_loop(Vcomputer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcomputer___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcomputer___024root___eval_settle(&(vlSymsp->TOP));
        Vcomputer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcomputer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/computer.sv", 21, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcomputer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcomputer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcomputer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcomputer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcomputer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcomputer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/computer.sv", 21, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcomputer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vcomputer::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcomputer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcomputer::final() {
    Vcomputer___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vcomputer___024root__trace_init_top(Vcomputer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcomputer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomputer___024root*>(voidSelf);
    Vcomputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcomputer___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcomputer___024root__trace_register(Vcomputer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcomputer::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcomputer___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
