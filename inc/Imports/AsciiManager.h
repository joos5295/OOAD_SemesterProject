//
// Created by joel on 4/10/19.
//

/*
 * To import an ascii art text file:
 *  Save it in assets/{path}
 *  Call AsciiManager::load(path)
 *  Use returned CellMatrix
 *  
 * File Format:
 *  Line widths must be no more than the width of the first line
 *  If line widths are shorter than the first line, it is padded with blanks
 * 
 * To changes colors:
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

#ifndef OOAD_SEMESTERPROJECT_ASSETMANAGER_H
#define OOAD_SEMESTERPROJECT_ASSETMANAGER_H

#include <unordered_map>
#include <string>
#include "UI/CellMatrix.h"

class AsciiManager {
    static std::unordered_map<std::string,CellMatrix> assets;

    static void read(std::string);
    static void readTerain(std::string);

public:
    static const CellMatrix load(std::string);
    static const CellMatrix loadTerain(std::string);

};

#endif //OOAD_SEMESTERPROJECT_ASSETMANAGER_H
