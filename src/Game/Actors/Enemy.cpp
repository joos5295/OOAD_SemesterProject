//
// Created by user on 4/16/19.
//

#include "Game/Actors/Enemy.h"
#include "Assets/AssetManager.h"

Enemy::Enemy(int h, const Slider& s, int x, int y, const Glyph g, const GlyphMap* m) : Entity(h, x, y, g, m), slider(s) {}

int Enemy::attack() const {
    return attackDamage;
}

Slider Enemy::getSlider() const {
    return slider;
}

bool Enemy::isFriendly() const {
    return false;
}

Enemy* Enemy::generateEncounter() {
    return this;
}
