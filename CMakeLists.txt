cmake_minimum_required(VERSION 3.28)
project(study C)

set(CMAKE_C_STANDARD 11)

add_executable(s_and_c s_and_c.c)
add_executable(bug_and_apple bug_and_apple.c
        add.c
        int.c)
add_executable(add add.c)