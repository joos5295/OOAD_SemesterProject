//
// Created by Joos5295 on 4/16/19.
//

#include "Game/Game.h"

void Game::setActiveState(int s){
    if(s == 0)
    {
        activeState = dungeon;
    }
    else if(s == 1)
    {
        activeState = menu;
    }
    else
    {
        activeState = encounter;
    }
}
