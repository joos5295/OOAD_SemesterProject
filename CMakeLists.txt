cmake_minimum_required(VERSION 3.13)
project(OOAD_SemesterProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_executable(dungeon src/main.cpp inc/UI/Display.h inc/UI/Cell.h inc/UI/Color.h src/UI/Cell.cpp src/UI/Color.cpp inc/UI/Input.h src/UI/Input.cpp src/UI/Display.cpp inc/Debug/Debug.h src/Debug/Debug.cpp inc/UI/CellMatrix.h src/UI/CellMatrix.cpp)

target_link_libraries(dungeon ncurses)
