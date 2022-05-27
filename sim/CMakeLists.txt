find_package(BISON)
find_package(FLEX)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")


bison_target(
  parser nandgame.yy
  ${CMAKE_CURRENT_BINARY_DIR}/parser.cpp
)

flex_target(
  lexer nandgame.ll
  ${CMAKE_CURRENT_BINARY_DIR}/lexer.cpp
)

add_flex_bison_dependency(lexer parser)

include_directories("${CMAKE_CURRENT_BINARY_DIR}")
add_executable(
  interactive
  interactive.cpp
  ${BISON_parser_OUTPUTS}
  ${FLEX_lexer_OUTPUTS}
)

add_executable(
  codegen
  codegen.cpp
  ${BISON_parser_OUTPUTS}
  ${FLEX_lexer_OUTPUTS}
)

# Add the Verilated circuit to the target
verilate(
  interactive COVERAGE TRACE
  INCLUDE_DIRS "../design"
  VERILATOR_ARGS -f ../input.vc -Os --vpi -x-assign 0
  SOURCES ../design/control.sv
)
