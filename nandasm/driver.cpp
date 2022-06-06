#include "driver.hpp"

#include <bitset>

using namespace nandgame;

driver::driver() noexcept : lx(*this), pr(lx, *this) {}

int driver::parse() {
  int res = 0;
  try {
    res = pr.parse();
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
    def.clear();
    insts.clear();
    mod_later.clear();
  }
  if (!res) {
    for (const auto &a : mod_later) {
      auto it = def.find(a.first);
      if (it == def.end())
        std::cerr << a.first << " is undefined in instruction number "
                  << std::to_string(a.second);
      else {
        insts[a.second] = it->second;
      }
    }
    for (auto a : insts) {
      std::bitset<16> bits{a};
      std::cout << bits << std::endl;
    }
  }

  return res;
}

int driver::operator()() { return this->parse(); }
