//
// Created by joel on 4/10/19.
//

#include "UI/GlyphMap.h"
#include "Debug/Debug.h"

GlyphMap::GlyphMap(std::vector<Glyph> cs, int r, int c) : cells(std::move(cs)), R(r), C(c) {}

void GlyphMap::reset() const {
    next = 0;
}

Color GlyphMap::printNextCell(Color prev) const {
    if (next < R*C)
        return cells[next++].print(prev);
    else {
        Debug::println("GlyphMap overflow");
        Debug::close();
        exit(-1);
    }
}

int GlyphMap::getRows() const {
    return R;
}

int GlyphMap::getCols() const {
    return C;
}
