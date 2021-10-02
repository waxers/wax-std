cmake_minimum_required(VERSION 3.10)

project(wax-std VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/*.cpp)

add_library(wax ${SOURCE_FILES})

add_executable(wax-tests ${SOURCE_FILES} src/main.cpp)
