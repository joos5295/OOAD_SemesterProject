//
// Created by joel on 4/23/19.
//

#include <UI/Basic/Glyph.h>
#include <Debug/Debug.h>
#include "UI/Elements/TimingSlider.h"
#include "UI/Display.h"

TimingSlider::TimingSlider(int w, int rs, int re) : Slider(w), rangeStart(rs), rangeEnd(re) {}
TimingSlider::TimingSlider(int xIn, int yIn, int w, int rs, int re) : Slider(xIn,yIn,w), rangeStart(rs), rangeEnd(re) {}

void TimingSlider::update() {
    pos = (pos+1) % width;
}

void TimingSlider::displayInternals() const {
    Glyph cursor(' ',Color::White,Color::White);
    Color::Value color;
    if (success())
        color = Color::Cyan;
    else
        color = Color::Blue;
    Glyph good(' ',Color::White,color);
    for (int i = rangeStart; i <= rangeEnd; i++) {
        Display::write(good, i+1, y+1);
    }
    Display::write(cursor, 1+pos, y+1);
}

bool TimingSlider::success() const {
    return (pos)>=rangeStart && (pos)<=rangeEnd;
}
