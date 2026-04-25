cmake_minimum_required(VERSION 3.10)
project(MyCProject VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# CSV Printer (твое задание)
add_executable(csv_printer src/homework_csv-printer/main.c)
add_executable(csv_tests src/homework_csv-printer/test.c src/homework_csv-printer/main.c)
target_compile_definitions(csv_tests PRIVATE TEST_MODE)

# Основная программа
add_executable(my_program src/homework_csv-printer/main.c)
