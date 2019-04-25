//
// Created by Joel Courtney on 2019-04-22.
//

#include "Game/Actors/Actor.h"
#include "Debug/Debug.h"

Actor::Actor(int x, int y) : posX(x), posY(y) {}

bool Actor::isFriendly() const {
    Debug::println("Asked blank if friendly");
    return true;
}

int Actor::getX() const {
    return posX;
}

int Actor::getY() const {
    return posY;
}

void Actor::display() const {}
