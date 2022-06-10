cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(zadclasskcpp)

file(GLOB SOURCES "src/*.cc")
include_directories(include)
include_directories(src)

add_executable(main main.cc)
