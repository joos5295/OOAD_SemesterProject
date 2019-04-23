//
// Created by Joel Courtney on 2019-04-21.
//

#include "Game/Actors/EnemyFactory.h"
#include "Assets/AssetManager.h"

Enemy* EnemyFactory::ogre(int x, int y) {
    Slider slider(16, 10, 15);
    return new Enemy(5, slider, x, y, Glyph('&', Color::Red), AssetManager::loadArt("ogre.txt"));
}

Enemy* EnemyFactory::phoenix(int x, int y) {
    Slider slider(20, 5, 9);
    return new Enemy(10, slider, x, y, Glyph('Y', Color::Red), AssetManager::loadArt("phoenix.txt"));
}
