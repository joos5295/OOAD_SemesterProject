//
// Created by user on 4/16/19.
//

#include <UI/Display.h>
#include "GameState/Dungeon.h"
#include "Assets/AssetManager.h"
#include "Game/Actors/EnemyFactory.h"
#include "GameState/GameStateFactory.h"
#include "Debug/Debug.h"
#include "Game/Actors/Health.h"
#include "UI/Input.h"

Dungeon::Dungeon(){
    //level = AssetManager::loadTerrain(1);
    //player.moveTo(level->getStartX(),level->getStartY());
    startNextLevel();
}

void Dungeon::startNextLevel() {    //automatically load the next level, and set up the game.
    if(level != nullptr) {
        delete(level);
    }
    level = AssetManager::loadTerrain(nextLevel++);
    player.moveTo(level->getStartX(),level->getStartY());
}

void Dungeon::display(){
    level->display();
    player.display();
}

GameState* Dungeon::update() {
    /* when you trigger an encounter, use
     * return GameStateManager::encounter(player, enemy, this);
     */

    if(level->getSize() == 0){      //check if the level is a valid level, (would be better to do an update based system, but would be dificult to verify the initial level.
        return(GameStateFactory::mainMenu(this));
    }
    char c = Input::waitInput();

    Actor* actor = nullptr;
    switch (c) {
        case 'w':
            if (level->canMove(player.getX(),player.getY()-1)) {
                player.move(0,-1);
                actor = level->interact(player.getX(),player.getY());
            }
            break;
        case 'a':
            if (level->canMove(player.getX()-1,player.getY())) {
                player.move(-1,0);
                actor = level->interact(player.getX(),player.getY());
            }
            break;
        case 's':
            if (level->canMove(player.getX(),player.getY()+1)) {
                player.move(0,1);
                actor = level->interact(player.getX(),player.getY());
            }
            break;
        case 'd':
            if (level->canMove(player.getX()+1,player.getY())) {
                player.move(1,0);
                actor = level->interact(player.getX(),player.getY());
            }
            break;
        default:
            break;
    }
    if (actor) {
        if (actor->isFriendly()) {
            player.heal(((Health*)actor)->getHealth());
        } else {
            return GameStateFactory::encounter(&player, (Enemy*) actor, this);
        }
    }
    return this;
}