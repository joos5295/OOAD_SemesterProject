//
// Created by Joel Courtney on 2019-04-21.
//

#include "Game/Actors/EnemyFactory.h"
#include "Assets/AssetManager.h"

Enemy* EnemyFactory::ogre(int x, int y) {
    return new Enemy(5, x, y, Glyph('&', Color::Red), AssetManager::loadArt("ogre.txt"));
}

Enemy* EnemyFactory::phoenix(int x, int y) {
    return new Enemy(10, x, y, Glyph('Y', Color::Red), AssetManager::loadArt("phoenix.txt"));
}
