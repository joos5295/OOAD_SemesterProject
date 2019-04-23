//
// Created by joel on 4/23/19.
//

#include <UI/Basic/Glyph.h>
#include "UI/Elements/Slider.h"
#include "UI/Display.h"

Slider::Slider() : UIElement(0,0) {}
Slider::Slider(int w, int rs, int re) : UIElement(0,0), width(w), rangeStart(rs), rangeEnd(re), pos(0), active(true) {}
Slider::Slider(int xIn, int yIn, int w, int rs, int re) : UIElement(xIn,yIn), width(w), rangeStart(rs), rangeEnd(re), pos(0), active(true) {}

void Slider::update() {
    pos = (pos+1) % width;
}

void Slider::display() const {
    Display::box(width+1,2,x,y);
    
    Glyph cursor(' ',Color::White,Color::Green);
    Glyph good(' ',Color::White,Color::Blue);
    for (int i = rangeStart; i <= rangeEnd; i++) {
        Display::write(good, i+1, y+1);
    }
    Display::write(cursor, 1+pos, y+1);
}

void Slider::stop() {
    active = false;
}

bool Slider::success() const {
    return (pos)>=rangeStart && (pos)<=rangeEnd;
}

void Slider::setAttributes(int w, int rs, int re) {
    width = w;
    rangeStart = rs;
    rangeEnd = re;
}
