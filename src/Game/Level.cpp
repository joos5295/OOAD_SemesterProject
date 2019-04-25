//
// Created by user on 4/16/19.
//

#include "Game/Level.h"
#include "Assets/AssetManager.h"
#include "Debug/Debug.h"
#include "UI/Display.h"
#include "Game/Actors/EnemyFactory.h"
#include <algorithm>

/*Level::Level(int n) : terrain(AssetManager::loadTerrain("level-" + std::to_string(n) + ".txt")) {
    Actor* enemy = EnemyFactory::ogre(2,2);
    actors.push_back(enemy);
}*/

Level::Level(TerrainMap t, std::vector<Actor*> a, int playerX, int playerY): terrain(std::move(t)), actors(std::move(a)) {
    pX = playerX;
    pY = playerY;
}

int Level::getSize() {
    return(terrain.getRows() * terrain.getCols());
}

void Level::display() const {
    Display::write(terrain);
    for (Actor* a : actors) {
        a->display();
    }
}

bool Level::canMove(int x, int y) {
    return terrain.getTerrain(x,y)->canEnter();
}

void Level::enter(int x, int y, Player* p) {    //routs enter calls to the specified terrain cell.
    terrain.getTerrain(x, y)->enter(p);
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

void Level::removeActor(Actor* a) {
    delete a;
    actors.erase(std::remove(actors.begin(), actors.end(), a), actors.end());
}
