//
// Created by user on 4/16/19.
//

/*
 * The player's character. Moves around the map
 * according to player inputs. Takes and deals damage
 * in encounters.
 */

#ifndef OOAD_SEMESTERPROJECT_PLAYER_H
#define OOAD_SEMESTERPROJECT_PLAYER_H

#include "Entity.h"

class Player : public Entity {
public:
    explicit Player();

    int getX();
    int getY();
    void move(int,int);
    void moveTo(int,int);
    
    void heal(int);
};

#endif //OOAD_SEMESTERPROJECT_PLAYER_H