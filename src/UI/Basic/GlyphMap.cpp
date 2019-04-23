//
// Created by joel on 4/10/19.
//

#include "UI/Basic/GlyphMap.h"
#include "Debug/Debug.h"

GlyphMap::GlyphMap(std::vector<Glyph> cs, int r, int c) : CellMap(r,c), cells(std::move(cs)) {}

Color GlyphMap::printNextCell(Color prev) const {
    if (next < R*C)
        return cells[next++].print(prev);
    else {
        Debug::println("GlyphMap overflow");
        Debug::close();
        exit(-1);
    }
}
