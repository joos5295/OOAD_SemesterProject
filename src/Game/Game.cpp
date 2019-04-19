//
// Created by Joos5295 on 4/16/19.
// Updated by Scwe4009 on 4/19/19.
//

#include <Debug/Debug.h>
#include "Game/Game.h"
#include "GameState/GameState.h"
#include "GameState/MenuState.h"
#include "UI/Input.h"

//Initialize the game state to the menu state, maybe should do this in run instead
Game::Game(){
    setActiveState(0);
    menu = MenuState();
}

void Game::setActiveState(int s){
    if(s == 0)
    {
        activeState = &menu;

    }
    else if(s == 1)
    {
        activeState = &dungeon;
    }
    else
    {
        activeState = &encounter;
    }
}

//While the game isn't over, get a user input and do stuff
void Game::run(){
    Debug::println("running the game.");
    setActiveState(0);
    activeState->Update('a');
    Input::init();
    running = true;
    while(running){
        char c = Input::getInput();
        if (c) {
            activeState->Update(c);
        }
    }
}
