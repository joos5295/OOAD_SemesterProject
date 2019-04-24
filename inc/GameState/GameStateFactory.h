//
// Created by Joel Courtney on 2019-04-21.
//

#ifndef OOAD_SEMESTERPROJECT_GAMESTATEFACTORY_H
#define OOAD_SEMESTERPROJECT_GAMESTATEFACTORY_H

#include "Dungeon.h"
#include "Encounter.h"
#include "MainMenu.h"
#include "Ending.h"

class GameStateFactory {
public:
    static GameState* mainMenu();
    static GameState* mainMenu(GameState*);
    static GameState* dungeon(GameState*);
    static GameState* dungeon(Dungeon*,Encounter*);
    static GameState* encounter(Player*, Enemy*, Dungeon*);
    static GameState* ending(int, GameState* old);      //added ending state, int determines which ending (0/default: win, 1: die, others can be defined)
    static GameState* exit(GameState*);
};

#endif //OOAD_SEMESTERPROJECT_GAMESTATEFACTORY_H
