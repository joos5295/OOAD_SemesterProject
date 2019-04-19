//
// Created by user on 4/16/19.
//

#include <UI/Display.h>
#include "GameState/DungeonState.h"

DungeonState::DungeonState(){}

void DungeonState::display(){
    Display::begin();
    Display::commit();
}

int DungeonState::Update(char c) {return(0);}