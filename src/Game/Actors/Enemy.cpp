//
// Created by user on 4/16/19.
//

#include "Game/Actors/Enemy.h"
#include "Assets/AssetManager.h"

Enemy::Enemy(int h, int x, int y, const Glyph g, const GlyphMap* m) : Entity(h, x, y, g, m) {}

int Enemy::attack() {
    return attackDamage;
}

bool Enemy::isFriendly() const {
    return false;
}

Enemy* Enemy::generateEncounter() {
    return this;
}
