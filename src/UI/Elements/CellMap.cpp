//
// Created by Joel Courtney on 2019-04-16.
//

#include "UI/Elements/CellMap.h"

CellMap::CellMap(int r, int c) : R(r), C(c) {}

void CellMap::reset() const {
    next = 0;
}

int CellMap::getRows() const {
    return R;
}

int CellMap::getCols() const {
    return C;
}
