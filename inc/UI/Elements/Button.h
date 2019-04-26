//
// Created by user on 2019-04-19.
//

/*
 * Buttons are selectable and triggerable objects
 * in menus. E.g. the start and exit buttons in the
 * main menu.
 */

#ifndef OOAD_SEMESTERPROJECT_BUTTON_H
#define OOAD_SEMESTERPROJECT_BUTTON_H

#include <string>
#include <UI/Basic/GlyphMap.h>
#include "Text.h"
#include "UIElement.h"

class Button : public UIElement {

private:
    Text normal;
    Text selected;

    bool isSelected;

public:
    //explicit Button(std::string text);    //this should be deprecated
    explicit Button(std::string text, int xIn, int yIn);
    void select();
    void deSelect();
    void display() const override;

};


#endif //OOAD_SEMESTERPROJECT_BUTTON_H
