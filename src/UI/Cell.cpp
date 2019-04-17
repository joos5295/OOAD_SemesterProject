//
// Created by Joel Courtney on 2019-04-16.
//

#include "UI/Cell.h"

Color Cell::print(Color prev) const {
    Color color = getColor();
    if (prev != color) {
        color.activate();
    }
    addch(getChar());
    return color;
}
