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
    void addText(std::string, int, int);    //default color is white text on a black background
    void addText(std::string, int, int, Color);
    void addButton(std::string, int, int);      //default color is white text on a black background
    void addButton(std::string, int, int, Color);   //technically doesn't do anything different yet

    void display();

    /*
     * This function encapsulates getting a button "click" from the menu.
     * It handles key input collection, traversing the button list, and collecting thc "click" Space press.
     * The value returned is the index of the button based on the order that the buttons were added to the class.
     */
    int getSelection();

};


#endif //OOAD_SEMESTERPROJECT_MENU_H
