add_executable(
  interactive
  VPIObject.cpp
  interactive.cpp
)

target_link_libraries(interactive PRIVATE nandasm)

target_include_directories(
  interactive PRIVATE
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}"
)

add_executable(
  codegen
  codegen.cpp
)

target_link_libraries(codegen PRIVATE nandasm)

find_package(verilator HINTS $ENV{VERILATOR_ROOT} ${VERILATOR_ROOT})
if(NOT verilator_FOUND)
  message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()


# Add the Verilated circuit to the target
verilate(
  interactive COVERAGE TRACE
  INCLUDE_DIRS "../design"
  VERILATOR_ARGS -f input.vc --vpi -x-assign 0
  SOURCES ../design/computer.sv
)
