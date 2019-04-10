#include <iostream>
#include "UI/Display.h"

#include "UI/Cell.h"
#include <chrono>
#include <thread>
#include <ncurses.h>
#include "UI/Input.h"

int main() {
    Display::init();
    Input in;
    Cell g1('g', Color::Red, Color::Green);
    Cell g2('h', Color::White);
    Cell g3('i', Color::Blue);
    Cell g4('j', Color::White);
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

        Cell glyphs[][2] = {{g1, g2},
                              {g3, g4},
                              {g1, g3}};
        Display::begin();
        Display::write(glyphs);
        Display::write(glyphs,2,2);

        Display::write(g2, 5, 4);
        Display::commit();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        char c = in.getInput();
        if (c) {
            break;
        }
    }
    Display::close();
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}