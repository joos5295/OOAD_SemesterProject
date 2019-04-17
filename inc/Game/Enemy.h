//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_ENEMY_H
#define OOAD_SEMESTERPROJECT_ENEMY_H

#include "Entity.h"

class Enemy : public Entity{
private:
    int attackDamage;

public:
    int attack();
};

#endif //OOAD_SEMESTERPROJECT_ENEMY_H
