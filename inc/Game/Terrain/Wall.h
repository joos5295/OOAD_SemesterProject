//
// Created by Joel Courtney on 2019-04-17.
//

#ifndef OOAD_SEMESTERPROJECT_WALL_H
#define OOAD_SEMESTERPROJECT_WALL_H

#include "Terrain.h"

class Wall : public Terrain {
    Wall() = default;

    Wall(Wall const&) = delete;
    void operator=(Wall const&) = delete;

public:
    static Terrain* getInstance();

    char getChar() const override;
    Color getColor() const override;

    bool canEnter() const override;
    void enter(Player*) override;
};

#endif //OOAD_SEMESTERPROJECT_WALL_H
