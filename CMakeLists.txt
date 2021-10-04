cmake_minimum_required(VERSION 3.10)

project(wax-std VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

add_subdirectory(src)

add_executable(wax-tests src/bin/main.cpp)

target_include_directories(wax-tests PUBLIC "src")

target_link_libraries(wax-tests wax)
