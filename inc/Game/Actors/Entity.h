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

#include <UI/Elements/HealthBar.h>
#include "UI/Basic/GlyphMap.h"
#include "Actor.h"

class Entity : public Actor {
protected:
    int health;
    int damage;

    const Glyph dungeonArt;
    const GlyphMap* encounterArt;
    
    HealthBar healthBar;

    Entity(int,int,int,int,const Glyph,const GlyphMap*);

public:
    void takeDamage(int dmg);
    int attack() const;
    bool isDead() const;

    void display(int, int) const;
    void display() const;
    
    int getEncounterArtWidth() const;
    int getEncounterArtHeight() const;
    
    void placeHealthBar(int,int);
};

#endif //OOAD_SEMESTERPROJECT_ENTITY_H