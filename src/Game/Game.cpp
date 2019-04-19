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
    //menu = MenuState();
    setActiveState(0);

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
    int next = 0;
    Input::init();
    Debug::println("running the game.");

    setActiveState(next);
    next = activeState->Update('a');

    while(next >= 0){

        setActiveState(next);       //update the game state to be the next state

        char c = Input::getInput();     //get user input, to be updated to wait input
        if (c) {
            next = activeState->Update(c);  //call update on the current game state
        }
    }
}
