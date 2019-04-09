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
    explicit Glyph(char, Color::Value);

    Color print(Color);
};

#endif //OOAD_SEMESTERPROJECT_GLYPH_H
