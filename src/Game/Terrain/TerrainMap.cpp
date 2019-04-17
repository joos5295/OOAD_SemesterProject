//
// Created by Joel Courtney on 2019-04-16.
//

#include "Game/Terrain/TerrainMap.h"
#include "Debug/Debug.h"

TerrainMap::TerrainMap(std::vector<Terrain*> cs, int r, int c) : CellMap(r,c), cells(std::move(cs)) {}

Color TerrainMap::printNextCell(Color prev) const {
    if (next < R*C)
        return cells[next++]->print(prev);
    else {
        Debug::println("TerrainMap overflow");
        Debug::close();
        exit(-1);
    }
}
