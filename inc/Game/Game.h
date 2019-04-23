//
// Created by Joos5295 on 4/16/19.
//

/*
 * FACADE wrapping the complicated functionality
 * of actually running the game.
 */

#ifndef OOAD_SEMESTERPROJECT_GAME_H
#define OOAD_SEMESTERPROJECT_GAME_H

#include "GameState/GameState.h"
#include "GameState/Dungeon.h"
#include "GameState/Menu.h"
#include "GameState/Encounter.h"

class Game {

public:
    explicit Game();
    void run(); //start the game from main

private:

    GameState* activeState;


};

#endif //OOAD_SEMESTERPROJECT_GAME_H