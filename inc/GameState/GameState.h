//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_GAMESTATE_H
#define OOAD_SEMESTERPROJECT_GAMESTATE_H

class GameState{
public:
    virtual ~GameState() = default;

    virtual void display() = 0;
    virtual GameState* update() = 0;
};

#endif //OOAD_SEMESTERPROJECT_GAMESTATE_H
