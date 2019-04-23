//
// Created by user on 4/16/19.
//

/*
 * Entities are all creatures with health
 * and the possibility of death.
 * This includes the player and all enemies.
 */

#ifndef OOAD_SEMESTERPROJECT_ENTITY_H
#define OOAD_SEMESTERPROJECT_ENTITY_H

#include "UI/Basic/GlyphMap.h"
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
    
    int getEncounterArtWidth() const;
    int getEncounterArtHeight() const;
};

#endif //OOAD_SEMESTERPROJECT_ENTITY_H