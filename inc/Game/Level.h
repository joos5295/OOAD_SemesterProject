//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_LEVEL_H
#define OOAD_SEMESTERPROJECT_LEVEL_H

#include "Game/Actors/Actor.h"
#include "Game/Actors/Player.h"
#include "Game/Actors/Enemy.h"
#include <vector>
#include <iostream>
#include "Game/Terrain/TerrainMap.h"

class Level {
    const TerrainMap* terrain;
    std::vector<Actor*> actors;

public:
    explicit Level(int);

    void display() const;
    
    bool canMove(int,int);
    Actor* interact(int,int);
    
    int getStartX() const;
    int getStartY() const;
};

#endif //OOAD_SEMESTERPROJECT_LEVEL_H
