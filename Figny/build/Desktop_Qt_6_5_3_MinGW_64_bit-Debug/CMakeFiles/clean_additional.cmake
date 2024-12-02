# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Figny_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Figny_autogen.dir\\ParseCache.txt"
  "Figny_autogen"
  )
endif()
