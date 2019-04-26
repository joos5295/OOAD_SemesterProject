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

#include <UI/Elements/TimingSlider.h>
#include <UI/Elements/ReactionSlider.h>
#include "Entity.h"

class Enemy : public Entity {
private:
    int attackDamage;
    TimingSlider attackSlider;
    ReactionSlider defenseSlider;
    
public:
    Enemy(int x, int y, int h, int d, const TimingSlider&, const ReactionSlider&,const Glyph,const GlyphMap*);

    TimingSlider* getAttackSlider();
    ReactionSlider* getDefenseSlider();
    
    bool isFriendly() const override;
};

#endif //OOAD_SEMESTERPROJECT_ENEMY_H
