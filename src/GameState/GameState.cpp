//
// Created by user on 4/16/19.
//

#include <Debug/Debug.h>
#include "GameState/GameState.h"

int GameState::Update(char c) {
    Debug::println("You are in the parent game state update function, something has gone wrong you shouldn't be here.");
    return(-1);
}