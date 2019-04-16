//
// Created by joel on 4/9/19.
//

#include "UI/Display.h"

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

void Display::write(const Cell& g) {
    move(0,0);
    color = g.print(color);
}

void Display::write(const Cell& g, int x, int y) {
    move(x, y);
    color = g.print(color);
}

void Display::write(const CellMatrix& m) {
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

void Display::write(const CellMatrix& m, int x, int y) {
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