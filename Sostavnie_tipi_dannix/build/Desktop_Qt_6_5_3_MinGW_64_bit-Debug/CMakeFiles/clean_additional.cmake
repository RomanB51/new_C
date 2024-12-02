# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Sostavnie_tipi_dannix_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Sostavnie_tipi_dannix_autogen.dir\\ParseCache.txt"
  "Sostavnie_tipi_dannix_autogen"
  )
endif()
