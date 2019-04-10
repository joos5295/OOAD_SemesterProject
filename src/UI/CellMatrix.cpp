//
// Created by joel on 4/10/19.
//

#include "UI/CellMatrix.h"
#include "Debug/Debug.h"

CellMatrix::CellMatrix(Cell* cs, int r, int c) : cells(cs), R(r), C(c) {}

CellMatrix::~CellMatrix() {
    delete cells;
}

void CellMatrix::reset() {
    next = 0;
}

Color CellMatrix::printNextCell(Color prev) {
    if (next < R*C)
        return cells[next++].print(prev);
    else {
        Debug::println("CellMatrix overflow");
        Debug::close();
        exit(-1);
    }
}

int CellMatrix::getRows() const {
    return R;
}

int CellMatrix::getCols() const {
    return C;
}
