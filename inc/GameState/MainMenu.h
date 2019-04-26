//
// Created by user on 4/16/19.
//

#ifndef OOAD_SEMESTERPROJECT_MAINMENU_H
#define OOAD_SEMESTERPROJECT_MAINMENU_H

#include "GameState.h"
#include <UI/Elements/Text.h>
#include <UI/Elements/Menu.h>
#include "UI/Elements/Button.h"


class MainMenu: public GameState {

private:
    Menu *m;

public:
    MainMenu();
    ~MainMenu() override;

    void display() const override;
    GameState* update() override;

};

#endif //OOAD_SEMESTERPROJECT_MAINMENU_H
