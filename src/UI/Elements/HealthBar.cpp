//
// Created by joel on 4/24/19.
//

#include <UI/Display.h>
#include <UI/Basic/Glyph.h>
#include "UI/Elements/HealthBar.h"

HealthBar::HealthBar(int start) : health(start), good(true) {}
HealthBar::HealthBar(int start, bool good) : health(start), good(good) {}
HealthBar::HealthBar(int x, int y, int start, bool good) : UIElement(x, y), health(start), good(good) {}

void HealthBar::setAlignment(bool g) {
    good = g;
}

void HealthBar::setHealth(int h) {
    health = h;
}

void HealthBar::display() const {
    Color::Value color;
    if (good)
        color = Color::Green;
    else
        color = Color::Red;
    Glyph bar(' ', Color::White, color);
    for (int i = 0; i < health; i++) {
        Display::write(bar, i+x, y);
    }
}
