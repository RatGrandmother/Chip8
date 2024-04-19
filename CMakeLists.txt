cmake_minimum_required(VERSION 3.16.3)
project(Chip8)

set(SOURCES 
    src/main.c
)

add_executable(chip8 ${SOURCES})