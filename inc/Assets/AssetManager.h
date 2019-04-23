//
// Created by joel on 4/10/19.
//

/*
 * To import an ascii art text file:
 *  Save it in assets/{path}
 *  Call AssetManager::loadArt(path)
 *  Use returned GlyphMap
 *  
 * File Format:
 *  Line widths must be no more than the width of the first line
 *  If line widths are shorter than the first line, it is padded with blanks
 * 
 * To change colors:
 *  Place a F (for foreground) or B (for background)
 *  Followed by the tag of the color:
 *      b = black
 *      r = red
 *      g = green
 *      y = yellow
 *      u = blue
 *      m = magenta
 *      c = cyan
 *      w = white
 *  The full two-character tag will not count toward line length.
 *  The change will persist by row until it is changed again.
 *  
 *  See assets/demo.txt for an example.
 */

/*
 * To import an terrain map text file:
 *  Save it in assets/{path}
 *  Call AssetManager::loadTerrain(path)
 *  Use returned TerrainMap
 *
 * File Format:
 *  Line widths must be no more than the width of the first line
 *  If line widths are shorter than the first line, it is padded with Empty terrain
 *
 * Terrain Key:
 *  ' ' = Empty
 *  'g' = Grass
 *  'w' = Wall
 *
 *  See assets/level-1.txt for an example.
 */

#ifndef OOAD_SEMESTERPROJECT_ASSETMANAGER_H
#define OOAD_SEMESTERPROJECT_ASSETMANAGER_H

#include <unordered_map>
#include <string>
#include <Game/Level.h>
#include "UI/Basic/GlyphMap.h"
#include "Game/Terrain/TerrainMap.h"

class AssetManager {
    static std::unordered_map<std::string,GlyphMap> glyphMaps;
    static std::unordered_map<std::string,Level> levels;        //might change key to int, or refactor into a vector.

    static void readArt(std::string);
    static void readTerrain(std::string);

public:
    static const GlyphMap* loadArt(std::string);

    //removed const because levels need to be interactable
    static Level* loadTerrain(int);       //for loading levels by number instead of file name.
    static Level* loadTerrain(std::string);      //probably to be deprecated, kept for consistency, and maybe internal use later.

};

#endif //OOAD_SEMESTERPROJECT_ASSETMANAGER_H
