//
// Created by joel on 4/10/19.
//

#include "UI/CellMatrix.h"
#include "Debug/Debug.h"

CellMatrix::CellMatrix(std::vector<Cell> cs, int r, int c) : cells(std::move(cs)), R(r), C(c) {
    Debug::println("making new matrix");
}

void CellMatrix::reset() const {
    next = 0;
}

Color CellMatrix::printNextCell(Color prev) const {
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
