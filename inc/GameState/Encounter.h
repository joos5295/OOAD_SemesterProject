//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_ENCOUNTER_H
#define OOAD_SEMESTERPROJECT_ENCOUNTER_H

#include "GameState.h"

class Encounter: public GameState{

public:
    Encounter();
    void display() override;
    int update(char c) override;
};

#endif //OOAD_SEMESTERPROJECT_ENCOUNTER_H
