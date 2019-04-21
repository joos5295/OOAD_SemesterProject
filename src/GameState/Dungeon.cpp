//
// Created by user on 4/16/19.
//

#include <UI/Display.h>
#include "GameState/Dungeon.h"
#include "Assets/AssetManager.h"
#include "Game/Actors/EnemyFactory.h"
#include "GameState/GameStateFactory.h"
#include "Debug/Debug.h"

Dungeon::Dungeon() : level(1) {}

void Dungeon::display(){
    level.display();
    Enemy enemy = EnemyFactory::ogre();
    enemy.display(true,1,1);
}

GameState* Dungeon::update(char c) {
    /* when you trigger an encounter, use
     * return GameStateManager::encounter(player, enemy, this);
     */

    Enemy enemy = EnemyFactory::ogre();
    return GameStateFactory::encounter(&player, &enemy, this);
    
    return this;
}