//
// Created by Joel Courtney on 2019-04-22.
//

/*
 * Health pack class. Walking over a cell
 * with this in it will restore health.
 */

#ifndef OOAD_SEMESTERPROJECT_HEALTH_H
#define OOAD_SEMESTERPROJECT_HEALTH_H

#include "Actor.h"

class Health : public Actor {
public:
    bool isFriendly() const override;
    
    int getHealth() const;
};

#endif //OOAD_SEMESTERPROJECT_HEALTH_H
