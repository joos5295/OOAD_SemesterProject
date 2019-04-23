//
// Created by Joos5295 on 4/16/19.
// Updated by Scwe4009 on 4/19/19.
//

#include <Debug/Debug.h>
#include <thread>
#include "Game/Game.h"
#include "GameState/GameState.h"
#include "GameState/Menu.h"
#include "UI/Input.h"
#include "UI/Display.h"
#include "GameState/GameStateFactory.h"

//Initialize the game state to the menu state, maybe should do this in run instead
Game::Game(){
    //menu = Menu();
    activeState = GameStateFactory::mainMenu();
}

//While the game isn't over, get a user input and do stuff
void Game::run(){
    Debug::println("running the game.");

    while(activeState != nullptr){
        Display::begin();
        activeState->display();     //have the active state draw itself
        Display::commit();
        activeState = activeState->update();  //call update on the current game state
    }
}
