//
// Created by Joel Courtney on 2019-04-21.
//

#include "Game/Actors/EnemyFactory.h"
#include "Assets/AssetManager.h"

Enemy* EnemyFactory::ogre(int x, int y) {
    TimingSlider attackSlider(16, 10, 15);
    ReactionSlider defenseSlider(20);
    return new Enemy(x, y, 5, 1, attackSlider, defenseSlider, Glyph('&', Color::Red), AssetManager::loadArt("ogre.txt"));
}

Enemy* EnemyFactory::phoenix(int x, int y) {
    TimingSlider attackSlider(20, 5, 9);
    ReactionSlider defenseSlider(10);
    return new Enemy(x, y, 10, 3, attackSlider, defenseSlider, Glyph('Y', Color::Red), AssetManager::loadArt("phoenix.txt"));
}
