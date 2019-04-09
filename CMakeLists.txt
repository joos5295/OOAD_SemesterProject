cmake_minimum_required(VERSION 3.13)
project(OOAD_SemesterProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(dungeon src/main.cpp src/UI/Display.h src/UI/Glyph.h src/UI/Color.h src/UI/Glyph.cpp src/UI/Color.cpp)
