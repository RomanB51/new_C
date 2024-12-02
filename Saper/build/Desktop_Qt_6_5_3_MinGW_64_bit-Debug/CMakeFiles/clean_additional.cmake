# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Saper_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Saper_autogen.dir\\ParseCache.txt"
  "Saper_autogen"
  )
endif()
