//
// Created by user on 4/16/19.
//

#include "Game/Actors/Entity.h"
#include "UI/Display.h"
#include "Debug/Debug.h"

Entity::Entity(int h, int x, int y, const Glyph g, const GlyphMap* m) : Actor(x,y), health(h), dungeonArt(g), encounterArt(m) {}

void Entity::takeDamage(int dmg) {
    health -= dmg;
}

bool Entity::isDead() const {
    return health <= 0;
}

void Entity::display(int x, int y) const {
    Display::write(*encounterArt, x ,y);
}

void Entity::display() const {
    Display::write(dungeonArt,posX,posY);
}

int Entity::getEncounterArtWidth() const {
    return encounterArt->getCols();
}

int Entity::getEncounterArtHeight() const {
    return encounterArt->getRows();
}
