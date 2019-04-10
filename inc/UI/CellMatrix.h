//
// Created by joel on 4/10/19.
//

#ifndef OOAD_SEMESTERPROJECT_CELLMATRIX_H
#define OOAD_SEMESTERPROJECT_CELLMATRIX_H

#include "Cell.h"

class CellMatrix {
    int R = 0;
    int C = 0;

    Cell* cells;

    int next = 0;

public:
    CellMatrix(Cell*,int,int);
    ~CellMatrix();

    void reset();
    Color printNextCell(Color);

    int getRows() const;
    int getCols() const;
};

#endif //OOAD_SEMESTERPROJECT_CELLMATRIX_H
