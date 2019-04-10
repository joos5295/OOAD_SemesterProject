//
// Created by Joel Courtney on 2019-04-09.
//

#ifndef OOAD_SEMESTERPROJECT_CELL_H
#define OOAD_SEMESTERPROJECT_CELL_H

#include "Color.h"

class Cell {
private:
    char c;
    Color color;

public:
    explicit Cell(char); // Creates a white character on black background
    explicit Cell(char, Color::Value); // Creates a colored character on colored background
    explicit Cell(char, Color::Value, Color::Value); // Creates a colored character on a colored background
    explicit Cell(char, Color); // If you somehow end up with a color object on your hands, then this creates with that color.

    Color print(Color) const;
};

#endif //OOAD_SEMESTERPROJECT_CELL_H
