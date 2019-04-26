//
// Created by user on 2019-04-23.
//

#ifndef OOAD_SEMESTERPROJECT_ENDING_H
#define OOAD_SEMESTERPROJECT_ENDING_H


#include "GameState.h"
#include <UI/Elements/Menu.h>

class Ending: public GameState {

private:
    Menu *m;    //menu behavior is encapsulted in menu class
        //the priamry purpose of the ending state is to take the result from the menu and decide what state to go to next,
        // as well as general management of the state

    void setupEnding(int);  //add the various text and button objects to the menu as necessary

public:

    Ending();
    explicit Ending(int);
    ~Ending() override;

    void display() const override;
    GameState* update() override;

};


#endif //OOAD_SEMESTERPROJECT_ENDING_H
