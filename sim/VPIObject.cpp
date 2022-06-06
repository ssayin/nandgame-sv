#include "VPIObject.hpp"

VPIObject::VPIObject(const std::string &name) {
  h = vpi_handle_by_name((PLI_BYTE8 *)name.c_str(), NULL);
  if (!h)
    throw std::runtime_error("");
}

VPIObject::VPIObject(VPIObject &p, std::size_t index) {
  h = vpi_handle_by_index(p.h, index);
  if (!h)
    throw std::runtime_error("");
}

VPIObject::~VPIObject() { vpi_free_object(h); }

int VPIObject::readInteger() {
  v.format = vpiIntVal;
  vpi_get_value(h, &v);
  return v.value.integer;
}

void VPIObject::putInteger(int val) {
  v.format = vpiIntVal;
  v.value.integer = val;
  vpi_put_value(h, &v, NULL, vpiNoDelay);
}

std::string VPIObject::getStr() { return vpi_get_str(vpiName, h); }
