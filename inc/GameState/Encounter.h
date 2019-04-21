//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_ENCOUNTER_H
#define OOAD_SEMESTERPROJECT_ENCOUNTER_H

#include "Game/Actors/Enemy.h"
#include "Game/Actors/Player.h"
#include "Dungeon.h"

class Encounter: public GameState {
    Player* player;
    Enemy* enemy;
    Dungeon* dungeon;

public:
    explicit Encounter(Player*, Enemy*, Dungeon*);
    ~Encounter() override = default;

    void display() override;
    GameState* update(char c) override;
};

#endif //OOAD_SEMESTERPROJECT_ENCOUNTER_H
