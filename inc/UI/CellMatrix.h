//
// Created by joel on 4/10/19.
//

#ifndef OOAD_SEMESTERPROJECT_CELLMATRIX_H
#define OOAD_SEMESTERPROJECT_CELLMATRIX_H

#include "Cell.h"
#include <vector>

class CellMatrix {
    int R = 0;
    int C = 0;

    const std::vector<Cell> cells;

    mutable int next = 0;

public:
    CellMatrix(std::vector<Cell>,int,int);

    void reset() const;
    Color printNextCell(Color) const;

    int getRows() const;
    int getCols() const;
};

#endif //OOAD_SEMESTERPROJECT_CELLMATRIX_H
