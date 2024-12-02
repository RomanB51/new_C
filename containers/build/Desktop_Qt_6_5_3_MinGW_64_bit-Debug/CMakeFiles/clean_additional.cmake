# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\containers_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\containers_autogen.dir\\ParseCache.txt"
  "containers_autogen"
  )
endif()
