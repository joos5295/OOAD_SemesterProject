//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_DUNGEON_H
#define OOAD_SEMESTERPROJECT_DUNGEON_H

#include "GameState.h"
#include "Game/Level.h"

class Dungeon: public GameState{
private:
    Level level;
    Player player;

public:
    Dungeon();
    ~Dungeon() override = default;

    void display() override;
    GameState* update(char c) override;

};

#endif //OOAD_SEMESTERPROJECT_DUNGEON_H
