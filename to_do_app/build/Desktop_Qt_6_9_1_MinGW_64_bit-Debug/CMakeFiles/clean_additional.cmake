# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\to_do_app_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\to_do_app_autogen.dir\\ParseCache.txt"
  "to_do_app_autogen"
  )
endif()
