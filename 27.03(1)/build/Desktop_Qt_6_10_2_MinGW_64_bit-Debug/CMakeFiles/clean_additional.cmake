# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\x_y_z_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\x_y_z_autogen.dir\\ParseCache.txt"
  "x_y_z_autogen"
  )
endif()
