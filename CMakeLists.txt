cmake_minimum_required(VERSION 3.21.1)
project(OpenglProject)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})
set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)
set(PROJECT_ENTRY ./main.cpp)


include_directories(${PROJECT_INCLUDE_DIR})
add_executable(${PROJECT_NAME} ${PROJECT_ENTRY})

add_subdirectory(src)
add_subdirectory(include/glfw)

target_include_directories(${PROJECT_NAME}
    PUBLIC src    
    PUBLIC include/glfw/include
)
target_link_directories(${PROJECT_NAME}
    PRIVATE src
    PRIVATE include/glfw/src
)
target_link_libraries(${PROJECT_NAME} src glfw)


# target_include_directories(${PROEJCT_NAME} PUBLIC src)
# target_link_libraries(${PROEJCT_NAME} glfw3)