cmake_minimum_required (VERSION 3.14)

project(Texalgo LANGUAGES CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_definitions(-std=c++11)

# Add sub directories
add_subdirectory(libraries)
add_subdirectory(standalone)
