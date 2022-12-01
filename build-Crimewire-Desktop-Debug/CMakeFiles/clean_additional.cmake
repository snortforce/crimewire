# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Crimewire_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Crimewire_autogen.dir/ParseCache.txt"
  "Crimewire_autogen"
  )
endif()
