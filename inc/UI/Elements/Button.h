//
// Created by user on 2019-04-19.
//

#ifndef OOAD_SEMESTERPROJECT_BUTTON_H
#define OOAD_SEMESTERPROJECT_BUTTON_H

#include <string>
#include <UI/Elements/GlyphMap.h>
#include "Text.h"

class Button {

private:
    Text normal;
    Text selected;

    bool isSelected;

    int x;
    int y;

public:
    //explicit Button(std::string text);    //this should be deprecated
    explicit Button(std::string text, int xIn, int yIn);
    void select();
    void deSelect();
    void drawSelf();

};


#endif //OOAD_SEMESTERPROJECT_BUTTON_H
