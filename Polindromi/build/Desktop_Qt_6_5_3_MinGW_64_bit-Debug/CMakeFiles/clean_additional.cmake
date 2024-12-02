# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Polindromi_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Polindromi_autogen.dir\\ParseCache.txt"
  "Polindromi_autogen"
  )
endif()
