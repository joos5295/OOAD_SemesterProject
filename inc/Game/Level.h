//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_LEVEL_H
#define OOAD_SEMESTERPROJECT_LEVEL_H

#include "Game/Actors/Entity.h"
#include "Game/Actors/Player.h"
#include "Game/Actors/Enemy.h"
#include <vector>
#include <iostream>
#include "Game/Terrain/TerrainMap.h"

class Level{
    const TerrainMap* terrainMap;
    std::vector<Enemy> EnemyList;
    //std::vector<Item> ItemList;

public:
    explicit Level(int);

    void display() const;
};

#endif //OOAD_SEMESTERPROJECT_LEVEL_H
