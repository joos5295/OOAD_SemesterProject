//
// Created by Joel Courtney on 2019-04-16.
//

#include "Game/Terrain/TerrainMap.h"
#include "Debug/Debug.h"

TerrainMap::TerrainMap(std::vector<Terrain*> cs, int r, int c) : CellMap(r,c), cells(std::move(cs)) {
    Debug::println(std::to_string(cells.size()));
}

Color TerrainMap::printNextCell(Color prev) const {
    if (next < R*C)
        return cells[next++]->print(prev);
    else {
        Debug::println("TerrainMap overflow");
        Debug::close();
        exit(-1);
    }
}

Terrain* TerrainMap::getTerrain(int x, int y) const {
    return cells.at(x + C*y);
}
