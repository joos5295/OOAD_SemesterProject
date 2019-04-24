//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_MAINMENU_H
#define OOAD_SEMESTERPROJECT_MAINMENU_H

#include "GameState.h"
#include <UI/Elements/Text.h>
#include "UI/Elements/Button.h"

class MainMenu: public GameState{

private:
    Button start;
    Button exit;
    std::vector<Button> buttons;

    Text instructions;

    int buttonId = 0;
    int buttonCount = 2;

public:
    MainMenu();
    ~MainMenu() override = default;

    void display() override;
    GameState* update() override;

};

#endif //OOAD_SEMESTERPROJECT_MAINMENU_H
