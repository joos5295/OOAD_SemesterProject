//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_GAMESTATE_H
#define OOAD_SEMESTERPROJECT_GAMESTATE_H

class GameState{
public:
    virtual void display() = 0;
    virtual int update(char c) = 0;
};

#endif //OOAD_SEMESTERPROJECT_GAMESTATE_H
