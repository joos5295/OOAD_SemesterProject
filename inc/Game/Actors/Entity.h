//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_ENTITY_H
#define OOAD_SEMESTERPROJECT_ENTITY_H

#include "UI/Elements/GlyphMap.h"

class Entity {
protected:
    int health;

    const GlyphMap* encounterArt;

    Entity(int,const GlyphMap*);

public:
    void takeDamage(int dmg);
    bool isDead() const;

    void display(bool, int, int) const;
};

#endif //OOAD_SEMESTERPROJECT_ENTITY_H