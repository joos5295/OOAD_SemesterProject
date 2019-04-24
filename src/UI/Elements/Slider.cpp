//
// Created by joel on 4/24/19.
//

#include "UI/Elements/Slider.h"
#include "UI/Display.h"

Slider::Slider(int w) : width(w) {}
Slider::Slider(int x, int y, int w) : UIElement(x,y), width(w) {}

void Slider::reset() {
    pos = 0;
}

void Slider::display() const {
    Display::box(width+1,2,x,y);
    displayInternals();
}
