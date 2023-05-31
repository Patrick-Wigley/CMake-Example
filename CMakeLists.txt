cmake_minimum_required(VERSION 3.21.1)
project(OpenglProject)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})
set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)
set(PROJECT_SOURCES ${PROJECT_SOURCE_DIR}/main.cpp)


# OPENGL Libs used currently are 32 Bit - (Make more dynamic in future)
set(OSBitSize 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitSize 64)
endif()

set(CMAKE_PREFIX_PATH PROJECT_INCLUDE_DIR/GLFW)
find_package(glfw3 REQUIRED)

include_directories(${PROJECT_INCLUDE_DIR})


add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries((${PROJECT_NAME} glfw))