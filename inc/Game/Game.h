//
// Created by Joos5295 on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_GAME_H
#define OOAD_SEMESTERPROJECT_GAME_H

#include "GameState/GameState.h"
#include "GameState/DungeonState.h"
#include "GameState/MenuState.h"
#include "GameState/EncounterState.h"

class Game {

public:
    explicit Game();
    void run(); //start the game from main

private:

    GameState *activeState;
    DungeonState dungeon;
    MenuState menu;
    EncounterState encounter;

    void setActiveState(int s);

};

#endif //OOAD_SEMESTERPROJECT_GAME_H