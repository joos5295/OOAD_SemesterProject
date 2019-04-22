//
// Created by user on 4/16/19.
//

#include "GameState/Encounter.h"
#include "Debug/Debug.h"
#include "GameState/GameStateFactory.h"

Encounter::Encounter(Player* p, Enemy* e, Dungeon* d) : player(p), enemy(e), dungeon(d) {}

void Encounter::display() {
    enemy->display(1,1);
}

GameState* Encounter::update(char c) {
    return GameStateFactory::dungeon(dungeon, this);
}
