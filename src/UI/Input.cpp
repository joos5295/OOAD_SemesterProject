//
// Created by joel on 4/9/19.
//

#include "Input.h"
#include <ncurses.h>

Input::Input() {
    noecho();
    cbreak();
    nodelay(stdscr, TRUE);
}

char Input::getInput() const {
    char c = getch();
    if (c == ERR) {
        return '\0';
    }
    return c;
}