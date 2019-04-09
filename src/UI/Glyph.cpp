//
// Created by Joel Courtney on 2019-04-09.
//

#include "Glyph.h"
#include <iostream>

Glyph::Glyph(char ch, Color::Value co) : c(ch), color((Color) co) {}

Color Glyph::print(Color prev) {
    if (prev != color) {
        color.print();
    }
    std::cout << c;
    return color;
}
