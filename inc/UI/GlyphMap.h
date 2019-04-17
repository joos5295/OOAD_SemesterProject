//
// Created by joel on 4/10/19.
//

#ifndef OOAD_SEMESTERPROJECT_GLYPHMAP_H
#define OOAD_SEMESTERPROJECT_GLYPHMAP_H

#include "Glyph.h"
#include <vector>

class GlyphMap {
    int R = 0;
    int C = 0;

    const std::vector<Glyph> cells;

    mutable int next = 0;

public:
    GlyphMap(std::vector<Glyph>,int,int);

    void reset() const;
    Color printNextCell(Color) const;

    int getRows() const;
    int getCols() const;
};

#endif //OOAD_SEMESTERPROJECT_GLYPHMAP_H
