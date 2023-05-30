cmake_minimum_required(VERSION 3.21.1)
project(Practice)

# OPENGL Libs used currently are 32 Bit - (Make more dynamic in future)
set(OSBitSize 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitSize 64)
endif()

include_directories(.)


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES})