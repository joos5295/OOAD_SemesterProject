//
// Created by user on 4/16/19.
//

#include "Game/Actors/Enemy.h"
#include "Assets/AssetManager.h"

Enemy::Enemy(int h, int d, const TimingSlider& as, const ReactionSlider& ds, int x, int y, const Glyph g, const GlyphMap* m)
    : Entity(h, d, x, y, g, m), attackSlider(as), defenseSlider(ds) {
    healthBar.setAlignment(false);
}

TimingSlider* Enemy::getAttackSlider() {
    return &attackSlider;
}

ReactionSlider* Enemy::getDefenseSlider() {
    return &defenseSlider;
}

bool Enemy::isFriendly() const {
    return false;
}

Enemy* Enemy::generateEncounter() {
    return this;
}
