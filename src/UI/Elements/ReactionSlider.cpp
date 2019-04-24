//
// Created by joel on 4/24/19.
//

#include "UI/Elements/ReactionSlider.h"
#include "UI/Display.h"
#include "UI/Basic/Glyph.h"

ReactionSlider::ReactionSlider(int w) : Slider(w) {}
ReactionSlider::ReactionSlider(int x, int y, int w) : Slider(x,y,w) {}

void ReactionSlider::update() {
    pos++;
}

void ReactionSlider::displayInternals() const {
    if (success()) {
        Glyph arrow('<', Color::Red);
        Glyph good('-', Color::White);
        for (int i = 0; i < width - pos; i++) {
            Display::write(good, i + 1, y + 1);
        }
        Display::write(arrow, width - pos, y + 1);
    } else {
        Glyph red(' ', Color::White, Color::Red);
        for (int i = 0; i < width; i++) {
            Display::write(red,i+1,y+1);
        }
    }
}

bool ReactionSlider::success() const {
    return pos < width;
}
