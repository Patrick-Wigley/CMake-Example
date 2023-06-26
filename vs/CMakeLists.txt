cmake_minimum_required(VERSION 3.21.1)
project(OpenglProject)

set(PROJECT_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/external)
set(PROJECT_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(PROJECT_ENTRY ./main.cpp)

set(CMAKE_BUILD_TYPE Debug)
file(MAKE_DIRECTORY debugLogs)
