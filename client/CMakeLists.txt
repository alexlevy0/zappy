cmake_minimum_required(VERSION 3.2)

project(PSU_2014_zappy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories()

set(SOURCE_FILES)

add_executable(client src/data.h src/option.c src/main.c src/network.c src/utils.h src/utils.c)