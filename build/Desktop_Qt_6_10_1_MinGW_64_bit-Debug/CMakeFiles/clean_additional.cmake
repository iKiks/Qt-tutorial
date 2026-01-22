# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appQtquick_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appQtquick_autogen.dir\\ParseCache.txt"
  "appQtquick_autogen"
  )
endif()
