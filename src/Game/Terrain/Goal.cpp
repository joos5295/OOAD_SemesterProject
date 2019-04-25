//
// Created by user on 2019-04-23.
//

#include "Game/Terrain/Goal.h"
#include "Debug/Debug.h"

Terrain* Goal::getInstance() {
    static Goal instance;
    return &instance;
}

char Goal::getChar() const {
    return 'E';
}

Color Goal::getColor() const {
    return Color(Color::Cyan, Color::Black);
}

bool Goal::canEnter() const {
    return true;
}

void Goal::enter(Player* p) {
    p->enterGoal();
}
