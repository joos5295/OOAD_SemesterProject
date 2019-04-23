//
// Created by joel on 4/10/19.
//

#ifndef OOAD_SEMESTERPROJECT_GLYPHMAP_H
#define OOAD_SEMESTERPROJECT_GLYPHMAP_H

#include "Glyph.h"
#include <vector>
#include "CellMap.h"

class GlyphMap : public CellMap {
    const std::vector<Glyph> cells;

public:
    GlyphMap(std::vector<Glyph>,int,int);

    Color printNextCell(Color) const override;
};

#endif //OOAD_SEMESTERPROJECT_GLYPHMAP_H
