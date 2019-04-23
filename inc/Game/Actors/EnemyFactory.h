//
// Created by Joel Courtney on 2019-04-21.
//

/*
 * Handles creation of enemy objects.
 * Currently supported enemies are:
 *  ogre
 *  phoenix
 * You WILL have to manually delete the references
 * when they die.
 */

#ifndef OOAD_SEMESTERPROJECT_ENEMYFACTORY_H
#define OOAD_SEMESTERPROJECT_ENEMYFACTORY_H

#include "Enemy.h"

class EnemyFactory {
public:
    static Enemy* ogre(int,int);
    static Enemy* phoenix(int,int);
};

#endif //OOAD_SEMESTERPROJECT_ENEMYFACTORY_H
