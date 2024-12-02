# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Cguests_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Cguests_autogen.dir\\ParseCache.txt"
  "Cguests_autogen"
  )
endif()
