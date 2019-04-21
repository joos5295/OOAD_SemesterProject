//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_PLAYER_H
#define OOAD_SEMESTERPROJECT_PLAYER_H

#include "Entity.h"

class Player : public Entity {

private:
    int posX;
    int posY;
    //Level level;

public:
    explicit Player();

    int getX();
    int getY();
    void move();
};

#endif //OOAD_SEMESTERPROJECT_PLAYER_H