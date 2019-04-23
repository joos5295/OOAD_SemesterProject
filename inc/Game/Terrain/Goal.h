//
// Created by user on 2019-04-23.
//

/*
 * The goal state of each level
 * When the player enters this cell they will move to the start of the next level
 */

#ifndef OOAD_SEMESTERPROJECT_GOAL_H
#define OOAD_SEMESTERPROJECT_GOAL_H

#include "Terrain.h"

class Goal : public Terrain  {
    Goal() = default;

    Goal(Goal const&) = delete;
    void operator=(Goal const&) = delete;

public:
    static Terrain* getInstance();

    char getChar() const override;
    Color getColor() const override;

    bool canEnter() const override;
    void enter(Player*) override;
};


#endif //OOAD_SEMESTERPROJECT_GOAL_H
