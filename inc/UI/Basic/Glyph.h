//
// Created by Joel Courtney on 2019-04-09.
//

/*
 * A simple implementation of Cell that stores and returns
 * a character and color. These are not hardcoded, unlike the
 * char and color used by terrain types.
 */

#ifndef OOAD_SEMESTERPROJECT_GLYPH_H
#define OOAD_SEMESTERPROJECT_GLYPH_H

#include "Color.h"
#include "Cell.h"

class Glyph : public Cell {
    char c;
    Color color;

    char getChar() const override;
    Color getColor() const override;

public:
    explicit Glyph(char); // Creates a white character on black background
    explicit Glyph(char, Color::Value); // Creates a colored character on colored background
    explicit Glyph(char, Color::Value, Color::Value); // Creates a colored character on a colored background
    explicit Glyph(char, Color); // If you somehow end up with a color object on your hands, then this creates with that color.
};

#endif //OOAD_SEMESTERPROJECT_GLYPH_H
