//
// Created by Joel Courtney on 2019-04-09.
//

#include "Color.h"
#include <iostream>

void Color::print() {
    switch (value) {
        case Value::Black:
            std::cout << "\033[30m";
            break;
        case Value::Red:
            std::cout << "\033[31m";
            break;
        case Value::Green:
            std::cout << "\033[32m";
            break;
        case Value::Yellow:
            std::cout << "\033[33m";
            break;
        case Value::Blue:
            std::cout << "\033[34m";
            break;
        case Value::Magenta:
            std::cout << "\033[35m";
            break;
        case Value::Cyan:
            std::cout << "\033[36m";
            break;
        case Value::White:
            std::cout << "\033[37m";
            break;
    }
}

bool Color::operator==(const Color& with) const {
    return value == with.value;
}

bool Color::operator!=(const Color& with) const {
    return value != with.value;
}
