//
// Created by user on 2019-04-23.
//

#ifndef OOAD_SEMESTERPROJECT_ENDING_H
#define OOAD_SEMESTERPROJECT_ENDING_H


#include "GameState.h"
#include <UI/Elements/Menu.h>

class Ending: public GameState{

private:
    Menu *m;
    void setupEnding(int);

public:

    Ending();
    Ending(int);
    ~Ending() override = default;

    void display() override;
    GameState* update() override;

};


#endif //OOAD_SEMESTERPROJECT_ENDING_H
