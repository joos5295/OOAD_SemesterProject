//
// Created by user on 2019-04-23.
//

#ifndef OOAD_SEMESTERPROJECT_MENU_H
#define OOAD_SEMESTERPROJECT_MENU_H

#include <UI/Elements/Text.h>
#include "UI/Elements/Button.h"

class Menu {
private:
    std::vector<Text> texts;
    std::vector<Button> buttons;
    int selected = 0;
    int numButtons = 0;

public:
    void addText(std::string, int, int);
    void addText(std::string, int, int, Color);
    void addButton(std::string, int, int);
    void addButton(std::string, int, int, Color);

    void display();

    int getSelection();

};


#endif //OOAD_SEMESTERPROJECT_MENU_H
