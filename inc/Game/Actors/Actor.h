//
// Created by Joel Courtney on 2019-04-22.
//

#ifndef OOAD_SEMESTERPROJECT_ACTOR_H
#define OOAD_SEMESTERPROJECT_ACTOR_H

class Enemy;

class Actor {
protected:
    int posX;
    int posY;
    
public:
    Actor(int,int);
    virtual bool isFriendly() const;
    
    int getX() const;
    int getY() const;
};

#endif //OOAD_SEMESTERPROJECT_ACTOR_H
