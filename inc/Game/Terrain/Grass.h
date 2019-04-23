//
// Created by Joel Courtney on 2019-04-17.
//

/*
 * Similar to Empty, but more likely to contain
 * enemies. Appears as a green 'w' in the dungeon.
 */

#ifndef OOAD_SEMESTERPROJECT_GRASS_H
#define OOAD_SEMESTERPROJECT_GRASS_H

#include "Terrain.h"

class Grass : public Terrain {
    Grass() = default;

    Grass(Grass const&) = delete;
    void operator=(Grass const&) = delete;

public:
    static Terrain* getInstance();

    char getChar() const override;
    Color getColor() const override;

    bool canEnter() const override;
    void enter(Player*) override;
};

#endif //OOAD_SEMESTERPROJECT_GRASS_H
