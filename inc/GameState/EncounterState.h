//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_ENCOUNTERSTATE_H
#define OOAD_SEMESTERPROJECT_ENCOUNTERSTATE_H

#include "GameState.h"

class EncounterState: public GameState{

public:
    EncounterState();
    void display() override;
    int Update(char c) override;
};

#endif //OOAD_SEMESTERPROJECT_ENCOUNTERSTATE_H
