#pragma once

#include <stdexcept>
#include <verilated_vpi.h>

class VPIObject {
public:
  VPIObject(const std::string &name);
  VPIObject(VPIObject &p, std::size_t index);
  ~VPIObject();

  int readInteger();
  void putInteger(int val);
  std::string getStr();

private:
  vpiHandle h;
  s_vpi_value v;
};
