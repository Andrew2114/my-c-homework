cmake_minimum_required(VERSION 3.10)
project(MyCProject VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(my_program main.c)

add_executable(tests tests.c)

