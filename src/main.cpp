#include <iostream>
#include "UI/Display.h"

#include "UI/Glyph.h"
#include <chrono>
#include <thread>

int main() {
    auto disp = Display<2,2>::getInstance();
    Glyph g1('g', Color::Red);
    Glyph g2('h', Color::Green);
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

        Glyph glyphs[2][2] = {{g1, g2},
                              {g3, g4}};
        disp->blit(glyphs);
        std::this_thread::sleep_for(std::chrono::milliseconds(20));

    }
    return 0;
}