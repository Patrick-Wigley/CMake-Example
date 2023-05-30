cmake_minimum_required(VERSION 3.21.1)
project(Practice)

# OPENGL Libs used currently are 32 Bit - (Make more dynamic in future)
set(OSBitSize 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitSize 64)
endif()

include_directories(.)

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)
