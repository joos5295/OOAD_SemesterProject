//
// Created by Joel Courtney on 2019-04-09.
//

/*
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

#include "Glyph.h"
#include <iostream>
#include <ncurses.h>

class Display {
    static Color color;

public:
    static void init();
    static void close();

    static void begin();
    static void commit();

    Display() = delete;
    Display(Display const&) = delete;

    // In order to use the array write methods, glyphs must have a known size at compile time.

    template<int R, int C>
    static void write(Glyph (&glyphs) [R][C]) {
        for (int r = 0; r < R; r++) {
            move(r, 0);
            for (int c = 0; c < C; c++) {
                color = glyphs[r][c].print(color);
            }
        }
    }

    template<int R, int C>
    static void write(Glyph (&glyphs) [R][C], int x, int y) {
        for (int r = 0; r < R; r++) {
            move(r + y, x);
            for (int c = 0; c < C; c++) {
                color = glyphs[r][c].print(color);
            }
        }
    }

    static void write(Glyph&);
    static void write(Glyph&, int, int);
};

#endif
