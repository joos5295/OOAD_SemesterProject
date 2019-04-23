//
// Created by user on 4/16/19.
//

/*
 * Enemies are the antagonist in an encounter.
 * They may or may not be displayed in the dungeon
 * They take and deal damage in an encounter.
 */

#ifndef OOAD_SEMESTERPROJECT_ENEMY_H
#define OOAD_SEMESTERPROJECT_ENEMY_H

#include "Entity.h"

class Enemy : public Entity {
private:
    int attackDamage;

public:
    Enemy(int,int,int,const Glyph,const GlyphMap*);

    int attack();
    
    bool isFriendly() const override;
    Enemy* generateEncounter();
};

#endif //OOAD_SEMESTERPROJECT_ENEMY_H
