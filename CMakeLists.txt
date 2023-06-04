cmake_minimum_required(VERSION 3.21.1)
project(OpenglProject)

set(CMake_GENERATOR "Ninja")

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})
set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)
set(PROJECT_ENTRY ./main.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_ENTRY})



target_link_directories(${PROJECT_NAME}
    PUBLIC src
)
target_link_libraries(${PROJECT_NAME} src)




