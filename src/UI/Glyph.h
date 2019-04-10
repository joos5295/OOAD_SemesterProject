//
// Created by Joel Courtney on 2019-04-09.
//

#ifndef OOAD_SEMESTERPROJECT_GLYPH_H
#define OOAD_SEMESTERPROJECT_GLYPH_H

#include "Color.h"

class Glyph {
public:
    char c;
    Color color;

public:
    explicit Glyph(char); // Creates a white character on black background
    explicit Glyph(char, Color::Value); // Creates a colored character on colored background
    explicit Glyph(char, Color::Value, Color::Value); // Creates a colored character on a colored background
    explicit Glyph(char, Color); // If you somehow end up with a color object on your hands, then this creates with that color.

    Color print(Color);
};

#endif //OOAD_SEMESTERPROJECT_GLYPH_H
