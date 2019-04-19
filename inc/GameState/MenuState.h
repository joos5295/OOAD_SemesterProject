//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_MENUSTATE_H
#define OOAD_SEMESTERPROJECT_MENUSTATE_H

#include <UI/Text.h>
#include "GameState.h"
//#include "Game/Game.h"
#include "UI/Button.h"

class MenuState: public GameState{

private:
    Button start;
    Button exit;
    std::vector<Button> buttons;

    Text instructions;

    int buttonId = 0;
    int buttonCount = 2;

public:
    MenuState();
    void display() override;
    int Update(char c) override;

};

#endif //OOAD_SEMESTERPROJECT_MENUSTATE_H
