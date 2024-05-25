cmake_minimum_required(VERSION 3.26)
project(azalyx C)

set(CMAKE_C_STANDARD 11)

add_compile_options(-Wall -Wextra -pedantic)

add_executable(azalyx
		src/main.c
		src/main.h
)
