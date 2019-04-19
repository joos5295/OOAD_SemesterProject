//
// Created by user on 4/16/19.
//

#include <Debug/Debug.h>
#include <UI/Display.h>
#include "GameState/GameState.h"

void GameState::display(){
    Display::begin();
    Display::commit();
}

int GameState::Update(char c) {
    Debug::println("You are in the parent game state update function, something has gone wrong you shouldn't be here.");
    return(-1);
}