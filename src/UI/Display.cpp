//
// Created by joel on 4/9/19.
//

#include "Display.h"

Color Display::color;

void Display::init() {
    initscr();
    clear();
    curs_set(0);
    start_color();
}

void Display::close() {
    endwin();
    std::cout << Color::colorIDs.size() << std::endl;
    for (auto c : Color::colorIDs) {
        std::cout << c.first << ' ' << c.second << std::endl;
    }
}

void Display::begin() {
    clear();
    color = Color(Color::Empty, Color::Empty);
    color.activate();
}

void Display::commit() {
    refresh();
}

void Display::write(Cell& g) {
    move(0,0);
    color = g.print(color);
}

void Display::write(Cell& g, int x, int y) {
    move(x, y);
    color = g.print(color);
}