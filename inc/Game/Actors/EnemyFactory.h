//
// Created by Joel Courtney on 2019-04-21.
//

#ifndef OOAD_SEMESTERPROJECT_ENEMYFACTORY_H
#define OOAD_SEMESTERPROJECT_ENEMYFACTORY_H

#include "Enemy.h"

class EnemyFactory {
public:
    static Enemy* ogre(int,int);
};

#endif //OOAD_SEMESTERPROJECT_ENEMYFACTORY_H
