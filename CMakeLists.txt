cmake_minimum_required(VERSION 3.28)
project(study C)

set(CMAKE_C_STANDARD 11)

add_executable(s_and_c s_and_c.c)
add_executable(bug_and_apple bug_and_apple.c
        add.c
        int.c
        PrimalityTest.c
        Calculate_e.c)
add_executable(add add.c)
add_executable(PrimalityTest PrimalityTest.c)
add_executable(Calculate_e Calculate_e.c)
add_executable(GCD GCD.c)
add_executable(a_b ac_test.c)
add_executable(Fibonacci Fibonacci.c)
add_executable(min min.c)
add_executable(SelectionSort SelectionSort.c)