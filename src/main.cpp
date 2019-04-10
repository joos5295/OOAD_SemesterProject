#include <iostream>
#include "UI/Display.h"

#include "UI/Glyph.h"
#include <chrono>
#include <thread>
#include <ncurses.h>
#include "UI/Input.h"

int main() {
    Display::init();
    Input in;
    Glyph g1('g', Color::Red, Color::Green);
    Glyph g2('h', Color::White);
    Glyph g3('i', Color::Blue);
    Glyph g4('j', Color::White);
    for (int count = 0; count < 100000; count++) {
        g1.c++;
        if (g1.c == 'z')
            g1.c = 'a';
        g2.c++;
        if (g2.c == 'z')
            g2.c = 'a';
        g3.c++;
        if (g3.c == 'z')
            g3.c = 'a';
        g4.c++;
        if (g4.c == 'z')
            g4.c = 'a';

        Glyph glyphs[][2] = {{g1, g2},
                              {g3, g4},
                              {g1, g3}};
        Display::begin();
        Display::write(glyphs);
        Display::write(glyphs,2,2);

        Display::write(g2, 5, 4);
        Display::commit();
        std::this_thread::sleep_for(std::chrono::milliseconds(40));
        char c = in.getInput();
        if (c) {
            break;
        }
    }
    Display::close();
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}