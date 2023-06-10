cmake_minimum_required(VERSION 3.24)
project(0x0A_argc_argv C)

set(CMAKE_C_STANDARD 11)

add_executable(mynewnameis 0-whatsmyname.c _putchar.c main.h)
add_executable(nargs 1-args.c)
add_executable(args 2-args.c)
add_executable(mul 3-mul.c)