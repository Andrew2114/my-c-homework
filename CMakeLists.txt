cmake_minimum_required(VERSION 3.10)
project(MyCProject VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Основная программа
add_executable(my_program src/homework_1/main.c)

# Тесты - компилируем с флагом TEST_MODE
add_executable(tests src/homework_1/test.c src/homework_1/main.c)
target_compile_definitions(tests PRIVATE TEST_MODE)

# Флаги компиляции
target_compile_options(my_program PRIVATE -Wall -Wextra)
target_compile_options(tests PRIVATE -Wall -Wextra -Wno-unused-but-set-variable)
