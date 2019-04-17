cmake_minimum_required(VERSION 3.13)
project(OOAD_SemesterProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

FILE(GLOB_RECURSE ALL_FILES inc/*.h src/*.cpp)

add_executable(dungeon ${ALL_FILES} src/Game/Level.cpp inc/Game/Level.h src/GameState/GameState.cpp inc/GameState/GameState.h src/GameState/DungeonState.cpp inc/GameState/DungeonState.h)

target_link_libraries(dungeon ncurses)
