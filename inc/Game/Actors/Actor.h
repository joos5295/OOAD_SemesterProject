//
// Created by Joel Courtney on 2019-04-22.
//

/*
 * Base class of anything that exists
 * inside the terrain of a level.
 * Players, enemies, and items.
 */

#ifndef OOAD_SEMESTERPROJECT_ACTOR_H
#define OOAD_SEMESTERPROJECT_ACTOR_H

class Enemy;

class Actor {
protected:
    int posX;
    int posY;
    
public:
    Actor(int,int);
    virtual bool isFriendly() const = 0;
    
    int getX() const;
    int getY() const;
    
    virtual void display() const;
};

#endif //OOAD_SEMESTERPROJECT_ACTOR_H
