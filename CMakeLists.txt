cmake_minimum_required(VERSION 3.22)
project(leyla)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_subdirectory(thirdparty)
add_subdirectory(src/runtime)
add_subdirectory(src/tools)