cmake_minimum_required(VERSION 3.6)
project(Series_0)

set(CMAKE_C_STANDARD 90)


add_executable(Series_01 ${SOURCE_FILES} product.c)
add_executable(Series_02 ${SOURCE_FILES} fibonacci.c)
add_executable(Series_03 ${SOURCE_FILES} substring.c)
add_executable(Demo_Code ${SOURCE_FILES} someDemoCode.c)
add_executable(Main ${SOURCE_FILES} main.c)
add_executable(linked_list ${SOURCE_FILES} linked_list.c)
add_executable(error ${SOURCE_FILES} error.c)