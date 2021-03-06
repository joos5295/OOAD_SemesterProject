//
// Created by Joel Courtney on 2019-04-09.
//

/*
 * Responsible for foreground / background color information.
 * Outside of the Glyph and Display classes, all that matters
 * is the Color::Value enum, which is accessed using Color::Red, etc.
 * This interfaces with NCurses' color pair system to keep track of colors.
 */

#ifndef OOAD_SEMESTERPROJECT_COLOR_H
#define OOAD_SEMESTERPROJECT_COLOR_H

#include <ncurses.h>
#include <iostream>
#include <vector>

class Color {
    friend class Cell;
    friend class Glyph;
    friend class Display;

    static std::vector<std::pair<int,int>> colorIDs;
    static int getColorID(int,int);

public:
    enum Value {
        Black = COLOR_BLACK,
        Red = COLOR_RED,
        Green = COLOR_GREEN,
        Yellow = COLOR_YELLOW,
        Blue = COLOR_BLUE,
        Magenta = COLOR_MAGENTA,
        Cyan = COLOR_CYAN,
        White = COLOR_WHITE,
        Empty
    };

    Color() : fore(Value::Empty), back(Value::Empty) {}
    constexpr Color(Value f) : fore(f), back(Value::Black) {}
    constexpr Color(Value f, Value b) : fore(f), back(b) {}

private:
    Value fore;
    Value back;

    void activate() const;

    bool operator==(const Color&) const;
    bool operator!=(const Color&) const;

    void debug_print() const {
        std::cout << fore << ' ' << back << std::endl;
    }
};

#endif //OOAD_SEMESTERPROJECT_COLOR_H
