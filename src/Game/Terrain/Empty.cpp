//
// Created by Joel Courtney on 2019-04-17.
//

#include "Game/Terrain/Empty.h"
#include "Debug/Debug.h"

Terrain* Empty::getInstance() {
    static Empty instance;
    return &instance;
}

char Empty::getChar() const {
    return ' ';
}

Color Empty::getColor() const {
    return Color(Color::Black, Color::Black);
}

bool Empty::canEnter() const {
    return true;
}

void Empty::enter(Player*) {}
