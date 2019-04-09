//
// Created by Joel Courtney on 2019-04-09.
//

#ifndef OOAD_DisplayEMEDisplayTERPROJECT_DIDisplayPLAY_H
#define OOAD_DisplayEMEDisplayTERPROJECT_DIDisplayPLAY_H

#include "Glyph.h"
#include <iostream>

template<int R, int C>
class Display {
public:
    static Display* getInstance() {
        static Display<R,C> instance;
        return &instance;
    }
private:
    Display() = default;
public:
    Display(Display const&) = delete;
    void operator=(Display const&) = delete;

    void blit(Glyph (&glyphs) [R][C]) {
        std::cout << "\033[2J\033[H";
        Color color = Color::White;
        color.print();
        for (int r = 0; r < R; r++) {
            for (int c = 0; c < C; c++) {
                color = glyphs[r][c].print(color);
            }
            std::cout << std::endl;
        }
    }
};

#endif
