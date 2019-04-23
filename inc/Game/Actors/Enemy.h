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

#include <UI/Elements/Slider.h>
#include "Entity.h"

class Enemy : public Entity {
private:
    int attackDamage;
    Slider slider;
    
public:
    Enemy(int,const Slider&,int,int,const Glyph,const GlyphMap*);

    int attack() const;
    Slider getSlider() const;
    
    bool isFriendly() const override;
    Enemy* generateEncounter();
};

#endif //OOAD_SEMESTERPROJECT_ENEMY_H
