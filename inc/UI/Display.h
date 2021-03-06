//
// Created by Joel Courtney on 2019-04-09.
//

/*
 * Interfaces with ncurses to write colored characters
 * to the screen.
 * 
 * Typical usage of Display:
 *
 *  Display::init()
 *
 *  game loop {
 *      Display::begin()
 *      Display::write(...)
 *      more write...
 *      Display::commit()
 *  }
 *
 *  Display::close()
 */

#ifndef OOAD_DisplayEMEDisplayTERPROJECT_DIDisplayPLAY_H
#define OOAD_DisplayEMEDisplayTERPROJECT_DIDisplayPLAY_H

#include "UI/Basic/Cell.h"
#include <iostream>
#include <ncurses.h>
#include "UI/Basic/CellMap.h"

class Display {
    static Color color;
    static Color boxColor;

public:
    static void init();
    static void close();

    static void begin();
    static void commit();

    Display() = delete;
    Display(Display const&) = delete;

    // In order to use the array write methods, glyphs must have a known size at compile time.

    static void write(const Cell&);
    static void write(const Cell&, int, int);

    static void write(const CellMap& m);
    static void write(const CellMap& m, int x, int y);
    
    static void box(int,int,int,int);
    
    static void wait(int t);
};

#endif
