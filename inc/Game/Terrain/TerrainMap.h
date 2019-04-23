//
// Created by Joel Courtney on 2019-04-16.
//

/*
 * A rectangular collection of Terrain cells.
 * Represents the physical base of a level.
 */

#ifndef OOAD_SEMESTERPROJECT_TERRAINMAP_H
#define OOAD_SEMESTERPROJECT_TERRAINMAP_H

#include "Terrain.h"
#include "UI/Basic/CellMap.h"

class TerrainMap : public CellMap {
    const std::vector<Terrain*> cells;

public:
    TerrainMap(std::vector<Terrain*>,int,int);

    Color printNextCell(Color) const override;
    
    Terrain* getTerrain(int,int) const;
};

#endif //OOAD_SEMESTERPROJECT_TERRAINMAP_H
