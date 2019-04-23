//
// Created by Joel Courtney on 2019-04-16.
//

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
