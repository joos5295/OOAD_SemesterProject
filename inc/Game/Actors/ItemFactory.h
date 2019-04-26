//
// Created by Joel Courtney on 2019-04-24.
//

/*
 * Responsible for creating non-entity actors.
 * Currently this only involves health packs.
 */

#ifndef OOAD_SEMESTERPROJECT_ITEMFACTORY_H
#define OOAD_SEMESTERPROJECT_ITEMFACTORY_H

#include "Health.h"

class ItemFactory {
public:
    static Health* health(int,int);
};

#endif //OOAD_SEMESTERPROJECT_ITEMFACTORY_H
