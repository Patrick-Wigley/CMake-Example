# CMakeList.txt : CMake project for CMakeExample, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CMakeExample "CMakeExample.cpp" "CMakeExample.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeExample PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
install (TARGETS CMakeExample DESTINATION "CMakeExample/bin")