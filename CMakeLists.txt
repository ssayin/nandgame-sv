cmake_minimum_required(VERSION 3.8)
project(nandgame-sv)

find_package(verilator HINTS $ENV{VERILATOR_ROOT} ${VERILATOR_ROOT})
if(NOT verilator_FOUND)
  message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()

# For clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Create a new executable target that will contain all your sources
add_executable(nandgame-sv sim_main.cpp)

add_executable(nandgame-asm main.cpp Parser.cpp Lexer.cpp)

set_property(TARGET nandgame-asm PROPERTY CXX_STANDARD 17)

# Add the Verilated circuit to the target
verilate(
  nandgame-sv COVERAGE TRACE
  INCLUDE_DIRS "src"
  VERILATOR_ARGS -f input.vc -Os -x-assign 0
  SOURCES src/computer.sv
)
