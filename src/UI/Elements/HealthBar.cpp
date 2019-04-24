//
// Created by joel on 4/24/19.
//

#include <UI/Display.h>
#include <UI/Basic/Glyph.h>
#include "UI/Elements/HealthBar.h"

HealthBar::HealthBar(int max) : health(max), maxHealth(max), good(true) {}
HealthBar::HealthBar(int max, bool good) : health(max), maxHealth(max), good(good) {}
HealthBar::HealthBar(int x, int y, int max, bool good) : UIElement(x, y), health(max), maxHealth(max), good(good) {}

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
