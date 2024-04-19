cmake_minimum_required(VERSION 3.16.3)
project(Chip8)

set(SOURCES 
    src/main.c
    src/instructions.c
    src/memory.c
    src/parser.c
)

add_executable(chip8 ${SOURCES})