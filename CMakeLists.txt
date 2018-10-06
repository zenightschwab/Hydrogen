cmake_minimum_required(VERSION 3.1.0)
project(Hydrogen)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

# includes cmake/FindSDL2.cmake
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

set(SOURCE_FILES main.c)

add_executable(module ${SOURCE_FILES})
target_link_libraries(module ${SDL2_LIBRARY})
