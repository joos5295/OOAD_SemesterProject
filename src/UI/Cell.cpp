//
// Created by Joel Courtney on 2019-04-09.
//

#include "UI/Cell.h"
#include <iostream>
#include <ncurses.h>

Cell::Cell(char ch) : c(ch), color(Color::White) {}
Cell::Cell(char ch, Color::Value co) : c(ch), color(co) {}
Cell::Cell(char ch, Color::Value f, Color::Value b) : c(ch), color(f,b) {}
Cell::Cell(char ch, Color co) : c(ch), color(co) {}

Color Cell::print(Color prev) const {
    if (prev != color) {
        color.activate();
    }
    addch(c);
    return color;
}
