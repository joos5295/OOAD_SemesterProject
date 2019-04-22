//
// Created by Joel Courtney on 2019-04-21.
//

#ifndef OOAD_SEMESTERPROJECT_GAMESTATEFACTORY_H
#define OOAD_SEMESTERPROJECT_GAMESTATEFACTORY_H

#include "Dungeon.h"
#include "Encounter.h"
#include "Menu.h"

class GameStateFactory {
public:
    static GameState* mainMenu();
    static GameState* mainMenu(GameState*);
    static GameState* dungeon(Menu*);
    static GameState* dungeon(Dungeon*,Encounter*);
    static GameState* encounter(Player*, Enemy*, Dungeon*);
    static GameState* exit(GameState*);
};

#endif //OOAD_SEMESTERPROJECT_GAMESTATEFACTORY_H
