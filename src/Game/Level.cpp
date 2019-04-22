//
// Created by user on 4/16/19.
//

#include "Game/Level.h"
#include "Assets/AssetManager.h"
#include "Debug/Debug.h"
#include "UI/Display.h"
#include "Game/Actors/EnemyFactory.h"

Level::Level(int n) : terrain(AssetManager::loadTerrain("level-" + std::to_string(n) + ".txt")) {
    Actor* enemy = EnemyFactory::ogre(2,2);
    actors.push_back(enemy);
}

void Level::display() const {
    Display::write(*terrain);
}

bool Level::canMove(int x, int y) {
    return terrain->getTerrain(x,y)->canEnter();
}

Actor* Level::interact(int x, int y) {
    for (Actor* a : actors) {
        if (a->getX() == x && a->getY() == y) {
            return a;
        }
    }
    return nullptr;
}

int Level::getStartX() const {
    return 2;
}

int Level::getStartY() const {
    return 1;
}
