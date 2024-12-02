# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Konsole_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Konsole_autogen.dir\\ParseCache.txt"
  "Konsole_autogen"
  )
endif()
