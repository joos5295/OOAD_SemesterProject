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

    int getX() const;
    int getY() const;
    void move(int,int);
    void moveTo(int,int);
    
    void heal(int);

    void enterGoal();
    void enterLevel();

    bool isAtGoal() const;        //for keeping track of whether the player is at the end of the level.
                        //makes use of Terrain Cells natural enter function
                        //slightly ugly due to path of information Cell to Player to Dungeon, but would be difficult to improve.
    bool isFriendly() const override; 
                        

private:
    bool atGoal;
};

#endif //OOAD_SEMESTERPROJECT_PLAYER_H