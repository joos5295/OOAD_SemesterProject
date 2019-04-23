//
// Created by joel on 4/23/19.
//

#include "UI/Elements/UIElement.h"

UIElement::UIElement(int _x, int _y) : x(_x), y(_y) {}

void UIElement::setPos(int nX, int nY) {
    x = nX;
    y = nY;
}
