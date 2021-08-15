cmake_minimum_required (VERSION 3.14)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(Texalgo LANGUAGES CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
add_definitions(-std=c++17)

# Add sub directories
add_subdirectory(libraries)
add_subdirectory(standalone)
