cmake_minimum_required(VERSION 3.6)
project(Series_0)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c product.c fibonacci.c)
add_executable(Series_0 ${SOURCE_FILES} product.c fibonacci.c)