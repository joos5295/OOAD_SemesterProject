//
// Created by user on 4/16/19.
//

#include <UI/Display.h>
#include "GameState/Dungeon.h"

Dungeon::Dungeon(){}

void Dungeon::display(){
    Display::begin();
    Display::commit();
}

int Dungeon::update(char c) {return(0);}