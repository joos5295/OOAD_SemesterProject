//
// Created by Joel Courtney on 2019-04-17.
//

#include "Game/Terrain/Grass.h"
#include "Debug/Debug.h"

Terrain* Grass::getInstance() {
    static Grass instance;
    return &instance;
}

char Grass::getChar() const {
    return 'w';
}

Color Grass::getColor() const {
    return Color(Color::Green, Color::Black);
}

bool Grass::canEnter() const {
    return true;
}

void Grass::enter(Player*) {}
