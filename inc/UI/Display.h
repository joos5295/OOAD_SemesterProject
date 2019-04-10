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

#include "Cell.h"
#include <iostream>
#include <ncurses.h>
#include "CellMatrix.h"

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

    static void write(CellMatrix& m) {
        m.reset();
        int R = m.getRows();
        int C = m.getCols();
        for (int r = 0; r < R; r++) {
            move(r, 0);
            for (int c = 0; c < C; c++) {
                color = m.printNextCell(color);
            }
        }
    }

    static void write(CellMatrix& m, int x, int y) {
        m.reset();
        int R = m.getRows();
        int C = m.getCols();
        for (int r = 0; r < R; r++) {
            move(r + y, x);
            for (int c = 0; c < C; c++) {
                color = m.printNextCell(color);
            }
        }
    }

    static void write(Cell);
    static void write(Cell, int, int);
};

#endif
