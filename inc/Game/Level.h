//
// Created by user on 4/16/19.
//

/*
 * Responsible for coordinating the terrain,
 * the non-player actors, and the start and end
 * points of the dungeon.
 * 
 * The dungeon must ask if the player can move to
 * a given cell. If they can, it then calls interact,
 * which returns a pointer to the actor at that position,
 * if one exists.
 */

#ifndef OOAD_SEMESTERPROJECT_LEVEL_H
#define OOAD_SEMESTERPROJECT_LEVEL_H

#include "Game/Actors/Actor.h"
#include "Game/Actors/Player.h"
#include "Game/Actors/Enemy.h"
#include <vector>
#include <iostream>
#include "Game/Terrain/TerrainMap.h"

class Level {
    const TerrainMap terrain;
    std::vector<Actor*> actors;

    int pX;
    int pY;

public:
    //explicit Level(int);      //currently deprecated
    explicit Level(TerrainMap, std::vector<Actor*>, int, int);

    int getSize() const;  //returns the number of terrain cells in the level

    void display() const;
    
    bool canMove(int,int) const;
    void enter(int, int, Player*);      //players now enter each terrain cell they step on
    Actor* interact(int,int);
    
    int getStartX() const;
    int getStartY() const;
    
    void removeActor(Actor*);
};

#endif //OOAD_SEMESTERPROJECT_LEVEL_H
