#pragma once

#include <cstdint>

struct Inst {
  uint16_t m_inst;
};

extern Inst &inst;

constexpr uint16_t DstA = 0x4;
constexpr uint16_t DstD = 0x2;
constexpr uint16_t DstAStar = 0x1;

constexpr uint16_t InstKindCI = 0x8000;

constexpr uint16_t ZX0 = 0xFFDF;
constexpr uint16_t ZY0 = 0xFFF7;
constexpr uint16_t ZX0ZY0 = ZX0 & ZY0;
constexpr uint16_t OP0 = 0xFFFD;

constexpr uint16_t make_ci(uint16_t o) { return (o << 6); }

constexpr uint16_t make_dst(uint16_t d) { return (d << 3); }

constexpr uint16_t make_expr(uint16_t destination, uint16_t sm_opcode,
                             uint16_t jmp = 0) {
  return make_dst(destination) | sm_opcode | jmp | InstKindCI;
}
