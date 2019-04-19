//
// Created by joel on 4/9/19.
//

#include "UI/Input.h"
#include <ncurses.h>

void Input::init() {
    noecho();
    cbreak();
}

char Input::getInput() {
    nodelay(stdscr, TRUE);
    char c = getch();
    if (c == ERR) {
        return '\0';
    }
    return c;
}

char Input::waitInput() {
    nodelay(stdscr, FALSE);
    char c = getch();
    if (c == ERR) {
        return '\0';
    }
    return c;
}
