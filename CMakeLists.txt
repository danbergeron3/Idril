cmake_minimum_required(VERSION 3.22)
project(Idril)

# set compiler flags if in UNIX
if (UNIX)
  set (CMAKE_CXX_FLAGS "-g3 -Wall -O0")
endif ()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

include_directories(src, include, build, libs, tests)
file(GLOB SOURCES "src/*.cpp")

# Specify the output directory for the executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

add_executable(test ${SOURCES})