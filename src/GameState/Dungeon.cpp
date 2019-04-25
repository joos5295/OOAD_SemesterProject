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
    startNextLevel();
}

void Dungeon::startNextLevel() {    //automatically load the next level, and set up the game.
    Debug::println("loading level " + std::to_string(nextLevel));
    level = AssetManager::loadTerrain(nextLevel++);
    player.enterLevel();
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

    if(level->getSize() == 0){      //check if the level is a valid level,
        // (would be better to do an update based system, but would be difficult to verify the initial level.
        return(GameStateFactory::ending(0, this));
    }

    if(player.isAtGoal()){      //check if the player is at the goal of the level, if they are start the next level, and exit this cycle of update
        startNextLevel();
        return(this);
    }

    char c = Input::waitInput();

    Actor* actor = nullptr;
    switch (c) {
        case 'w':
            if (level->canMove(player.getX(),player.getY()-1)) {
                player.move(0,-1);
                level->enter(player.getX(),player.getY(), &player);     //players actualy enter each cell now,
                                                    // could probably be combined with some of the other calls
                actor = level->interact(player.getX(),player.getY());
            }
            break;
        case 'a':
            if (level->canMove(player.getX()-1,player.getY())) {
                player.move(-1,0);
                level->enter(player.getX(),player.getY(), &player);
                actor = level->interact(player.getX(),player.getY());
            }
            break;
        case 's':
            if (level->canMove(player.getX(),player.getY()+1)) {
                player.move(0,1);
                level->enter(player.getX(),player.getY(), &player);
                actor = level->interact(player.getX(),player.getY());
            }
            break;
        case 'd':
            if (level->canMove(player.getX()+1,player.getY())) {
                player.move(1,0);
                level->enter(player.getX(),player.getY(), &player);
                actor = level->interact(player.getX(),player.getY());
            }
            break;
        default:
            break;
    }
    if (actor) {
        if (actor->isFriendly()) {
            player.heal(((Health*)actor)->getHealth());
            level->removeActor(actor);
        } else {
            return GameStateFactory::encounter(&player, (Enemy*) actor, this);
        }
    }
    return this;
}

void Dungeon::removeEnemy(Enemy* e) {
    level->removeActor((Actor*) e);
}
