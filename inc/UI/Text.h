//
// Created by user on 2019-04-19.
//

#ifndef OOAD_SEMESTERPROJECT_TEXT_H
#define OOAD_SEMESTERPROJECT_TEXT_H


#include "GlyphMap.h"

class Text {

private:
    GlyphMap *data;

    int x;
    int y;

public:
    explicit Text(std::string text, int xIn, int yIn, Color c);
    void drawSelf();

};


#endif //OOAD_SEMESTERPROJECT_TEXT_H
