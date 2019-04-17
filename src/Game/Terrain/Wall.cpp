//
// Created by Joel Courtney on 2019-04-17.
//

#include "Game/Terrain/Wall.h"
#include "Debug/Debug.h"

Terrain* Wall::getInstance() {
    static Wall instance;
    return &instance;
}

char Wall::getChar() const {
    return ' ';
}

Color Wall::getColor() const {
    return Color(Color::Black, Color::White);
}

bool Wall::canEnter() const {
    return false;
}

void Wall::enter(Player*) {
    Debug::println("Can't enter wall.");
    exit(1);
}
