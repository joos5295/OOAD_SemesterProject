//
// Created by Joel Courtney on 2019-04-16.
//

/*
 * Superclass of all terrain types.
 * Note that we considered using STRATEGY,
 * but since there is very little shared structure
 * in the subclasses, it would actually result in
 * less maintainable and more confusing code.
 */

#ifndef OOAD_SEMESTERPROJECT_TERRAIN_H
#define OOAD_SEMESTERPROJECT_TERRAIN_H

#include "UI/Basic/Cell.h"
#include "Game/Actors/Player.h"

class Terrain : public Cell {
public:
    virtual bool canEnter() const = 0;
    virtual void enter(Player*) = 0;
};

#endif //OOAD_SEMESTERPROJECT_TERRAIN_H
