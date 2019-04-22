//
// Created by Joel Courtney on 2019-04-22.
//

#ifndef OOAD_SEMESTERPROJECT_HEALTH_H
#define OOAD_SEMESTERPROJECT_HEALTH_H

#include "Actor.h"

class Health : public Actor {
public:
    bool isFriendly() const override;
    
    int getHealth() const;
};

#endif //OOAD_SEMESTERPROJECT_HEALTH_H
