//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_ENTITY_H
#define OOAD_SEMESTERPROJECT_ENTITY_H

#include "UI/Elements/GlyphMap.h"
#include "Actor.h"

class Entity : public Actor {
protected:
    int health;

    const Glyph dungeonArt;
    const GlyphMap* encounterArt;

    Entity(int,int,int,const Glyph,const GlyphMap*);

public:
    void takeDamage(int dmg);
    bool isDead() const;

    void display(int, int) const;
    void display() const;
};

#endif //OOAD_SEMESTERPROJECT_ENTITY_H