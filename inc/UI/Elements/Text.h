//
// Created by user on 2019-04-19.
//

#ifndef OOAD_SEMESTERPROJECT_TEXT_H
#define OOAD_SEMESTERPROJECT_TEXT_H


#include "UI/Basic/GlyphMap.h"
#include "UIElement.h"

class Text : public UIElement {

private:
    GlyphMap *data;

public:
    explicit Text(std::string text, int xIn, int yIn, Color c);
    void display() const override;

};


#endif //OOAD_SEMESTERPROJECT_TEXT_H
