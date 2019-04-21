//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_MENU_H
#define OOAD_SEMESTERPROJECT_MENU_H

#include <UI/Elements/Text.h>
#include "GameState.h"
//#include "Game/Game.h"
#include "UI/Elements/Button.h"

class Menu: public GameState{

private:
    Button start;
    Button exit;
    std::vector<Button> buttons;

    Text instructions;

    int buttonId = 0;
    int buttonCount = 2;

public:
    Menu();
    ~Menu() override = default;

    void display() override;
    GameState* update(char c) override;

};

#endif //OOAD_SEMESTERPROJECT_MENU_H
