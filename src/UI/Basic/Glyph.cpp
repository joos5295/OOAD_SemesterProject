//
// Created by Joel Courtney on 2019-04-09.
//

#include "UI/Basic/Glyph.h"
#include <iostream>
#include <ncurses.h>

Glyph::Glyph(char ch) : c(ch), color(Color::White) {}
Glyph::Glyph(char ch, Color::Value co) : c(ch), color(co) {}
Glyph::Glyph(char ch, Color::Value f, Color::Value b) : c(ch), color(f,b) {}
Glyph::Glyph(char ch, Color co) : c(ch), color(co) {}

char Glyph::getChar() const {
    return c;
}

Color Glyph::getColor() const {
    return color;
}
