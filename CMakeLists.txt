cmake_minimum_required(VERSION 3.21.1)
project(OpenglProject)

set(PROJECT_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/external)
set(PROJECT_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(PROJECT_ENTRY ./main.cpp)

set(CMAKE_BUILD_TYPE Debug)

add_executable(${PROJECT_NAME} ${PROJECT_ENTRY})

add_subdirectory(src)
add_subdirectory(src/debuggerContent)
add_subdirectory(external/glfw)
#add_subdirectory(external/glew)

target_include_directories(${PROJECT_NAME} 
    PUBLIC src
    PUBLIC src/debuggerContent
    PUBLIC external/glfw/include
 #   PUBLIC external/glew/include
    )
target_link_directories(${PROJECT_NAME} 
    PRIVATE src
    PRIVATE src/debuggerContent
    PRIVATE external/glfw/src
 #   PRIVATE external/glew/src
    )
target_link_libraries(${PROJECT_NAME} ProjectsMathLib ProjectsTerminalManagerLib glfw)
#target_link_libraries(${PROJECT_NAME} ProjectsMathLib glfw glew)

