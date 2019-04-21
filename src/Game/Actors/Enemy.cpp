//
// Created by user on 4/16/19.
//

#include "Game/Actors/Enemy.h"
#include "Assets/AssetManager.h"

Enemy::Enemy(int h,std::string n) : Entity(h, AssetManager::loadArt(n)) {}

int Enemy::attack() {
    return attackDamage;
}