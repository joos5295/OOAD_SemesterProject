//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_DUNGEONSTATE_H
#define OOAD_SEMESTERPROJECT_DUNGEONSTATE_H

#include "GameState.h"
#include "Game/Level.h"

class DungeonState: public GameState{
private:
    Level level;

public:
    DungeonState();
    void display() override;
    int Update(char c) override;

};

#endif //OOAD_SEMESTERPROJECT_DUNGEONSTATE_H
