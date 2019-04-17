cmake_minimum_required(VERSION 3.13)
project(OOAD_SemesterProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

FILE(GLOB_RECURSE ALL_FILES inc/*.h src/*.cpp)

add_executable(dungeon ${ALL_FILES} src/Game/Game.cpp inc/Game/Game.h src/Game/Entity.cpp inc/Game/Entity.h)

target_link_libraries(dungeon ncurses)
