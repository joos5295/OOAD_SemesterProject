//
// Created by Joel Courtney on 2019-04-16.
//

#ifndef OOAD_SEMESTERPROJECT_CELLMAP_H
#define OOAD_SEMESTERPROJECT_CELLMAP_H

#include "UI/Color.h"

class CellMap {
protected:
    int R = 0;
    int C = 0;

    mutable int next = 0;

    CellMap(int,int);

public:
    void reset() const;

    int getRows() const;
    int getCols() const;

    virtual Color printNextCell(Color) const = 0;
};

#endif //OOAD_SEMESTERPROJECT_CELLMAP_H
