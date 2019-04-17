//
// Created by Joel Courtney on 2019-04-16.
//

#ifndef OOAD_SEMESTERPROJECT_TERRAIN_H
#define OOAD_SEMESTERPROJECT_TERRAIN_H

#include "UI/Cell.h"
#include "Game/Player.h"

class Terrain : public Cell {
public:
    virtual bool canEnter() const = 0;
    virtual void enter(Player*) const = 0;
};

#endif //OOAD_SEMESTERPROJECT_TERRAIN_H
