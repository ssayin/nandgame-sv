#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <vector>

class driver {
public:
  driver() = default;
  int parse();
  int operator()();

  uint16_t inst_count = 0;
  std::map<std::string, uint16_t> def;
  std::map<std::string, uint16_t> mod_later;
  std::vector<uint16_t> insts;
};
