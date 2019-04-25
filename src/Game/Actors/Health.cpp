//
// Created by Joel Courtney on 2019-04-22.
//

#include <Debug/Debug.h>
#include "Game/Actors/Health.h"
#include "UI/Display.h"

Glyph Health::glyph('+',Color::White, Color::Red);

Health::Health(int x, int y) : Actor(x,y) {}

bool Health::isFriendly() const {
    return true;
}

int Health::getHealth() const {
    return 3;
}

void Health::display() const {
    Display::write(glyph, posX, posY);
}
