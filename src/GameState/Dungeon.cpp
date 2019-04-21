//
// Created by user on 4/16/19.
//

#include <UI/Display.h>
#include "GameState/Dungeon.h"
#include "Assets/AssetManager.h"

Dungeon::Dungeon() : level(1) {}

void Dungeon::display(){
    level.display();
}

GameState* Dungeon::update(char c) {
    /* when you trigger an encounter, use
     * return GameStateManager::encounter(player, enemy, this);
     */

    return this;
}