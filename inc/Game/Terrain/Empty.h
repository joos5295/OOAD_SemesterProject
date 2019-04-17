//
// Created by Joel Courtney on 2019-04-17.
//

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
