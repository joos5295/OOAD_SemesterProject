//
// Created by user on 4/16/19.
//

#include "Game/Actors/Entity.h"
#include "UI/Display.h"
#include "Debug/Debug.h"

Entity::Entity(int h, const GlyphMap* m) : health(h), encounterArt(m) {}

void Entity::takeDamage(int dmg) {
    health -= dmg;
}

bool Entity::isDead() const {
    return health <= 0;
}

void Entity::display(bool encounter, int x, int y) const {
    if (encounter) {
//        if (encounterArt == nullptr)
        Debug::println("oh no");
        Display::write(*encounterArt, x ,y);
    }
}
