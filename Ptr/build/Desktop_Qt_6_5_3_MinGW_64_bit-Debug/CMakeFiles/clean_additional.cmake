# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Ptr_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Ptr_autogen.dir\\ParseCache.txt"
  "Ptr_autogen"
  )
endif()
