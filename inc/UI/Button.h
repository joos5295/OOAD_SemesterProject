//
// Created by user on 2019-04-19.
//

#ifndef OOAD_SEMESTERPROJECT_BUTTON_H
#define OOAD_SEMESTERPROJECT_BUTTON_H

#include <string>
#include <UI/GlyphMap.h>

class Button {

private:
    GlyphMap *normal;
    GlyphMap *selected;
    bool isSelected;
    int x;
    int y;

public:
    explicit Button(std::string text);
    explicit Button(std::string text, int xIn, int yIn);
    void select();
    void deSelect();
    void drawSelf();
};


#endif //OOAD_SEMESTERPROJECT_BUTTON_H
