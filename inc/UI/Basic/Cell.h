//
// Created by Joel Courtney on 2019-04-16.
//

/*
 * Smallest renderable unit.
 * Anything that can provide a character and
 * Color through this interface can be displayed.
 */

#ifndef OOAD_SEMESTERPROJECT_CELL_H
#define OOAD_SEMESTERPROJECT_CELL_H

#include "Color.h"

class Cell {
    virtual char getChar() const = 0;
    virtual Color getColor() const = 0;

public:
    Color print(Color) const;
};

#endif //OOAD_SEMESTERPROJECT_CELL_H
