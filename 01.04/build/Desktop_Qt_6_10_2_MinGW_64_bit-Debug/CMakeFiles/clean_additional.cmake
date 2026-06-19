# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\stack_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\stack_1_autogen.dir\\ParseCache.txt"
  "stack_1_autogen"
  )
endif()
