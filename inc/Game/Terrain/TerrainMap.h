//
// Created by Joel Courtney on 2019-04-16.
//

#ifndef OOAD_SEMESTERPROJECT_TERRAINMAP_H
#define OOAD_SEMESTERPROJECT_TERRAINMAP_H

#include "Terrain.h"
#include "UI/Elements/CellMap.h"

class TerrainMap : public CellMap {
    const std::vector<Terrain*> cells;

public:
    TerrainMap(std::vector<Terrain*>,int,int);

    Color printNextCell(Color) const override;
};

#endif //OOAD_SEMESTERPROJECT_TERRAINMAP_H
