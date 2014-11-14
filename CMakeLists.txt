cmake_minimum_required(VERSION 2.8.4)
project(TinyBrowser)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

set(SOURCE_FILES main.cpp dom.cpp)
add_executable(TinyBrowser ${SOURCE_FILES})