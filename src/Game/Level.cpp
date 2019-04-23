//
// Created by user on 4/16/19.
//

#include "Game/Level.h"
#include "Assets/AssetManager.h"
#include "Debug/Debug.h"
#include "UI/Display.h"
#include "Game/Actors/EnemyFactory.h"

/*Level::Level(int n) : terrain(AssetManager::loadTerrain("level-" + std::to_string(n) + ".txt")) {
    Actor* enemy = EnemyFactory::ogre(2,2);
    actors.push_back(enemy);
}*/

Level::Level(TerrainMap* t, int playerX, int playerY): terrain(std::move(t)){
    //terrain = t;
    pX = playerX;
    pY = playerY;
}

void Level::display() const {
    Debug::println("before level display");
    Debug::println(std::to_string(terrain->getCols()) + ", " + std::to_string(terrain->getRows()));
    Display::write(*terrain);
    Debug::println("after level display");
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
    return pX;
}

int Level::getStartY() const {
    return pY;
}
