//
// Created by Joel Courtney on 2019-04-17.
//

/*
 * Terrain cell with nothing special about it.
 * Appears as a black blank cell in the display.
 * Nothing happens unless there happens to be an
 * enemy inside it, which is out of the Empty class's
 * control. (Although enemies should typically be spawned
 * inside Grass.)
 */

#ifndef OOAD_SEMESTERPROJECT_EMPTY_H
#define OOAD_SEMESTERPROJECT_EMPTY_H

#include "Terrain.h"

class Empty : public Terrain {
    Empty() = default;

    Empty(Empty const&) = delete;
    void operator=(Empty const&) = delete;

public:
    static Terrain* getInstance();

    char getChar() const override;
    Color getColor() const override;

    bool canEnter() const override;
    void enter(Player*) override;
};

#endif //OOAD_SEMESTERPROJECT_EMPTY_H
