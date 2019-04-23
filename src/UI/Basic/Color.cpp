//
// Created by Joel Courtney on 2019-04-09.
//

#include "UI/Basic/Color.h"
#include <iostream>
#include <ncurses.h>
#include "UI/Display.h"
#include <algorithm>

std::vector<std::pair<int,int>> Color::colorIDs;

int Color::getColorID(int f, int b) {
    auto p = std::make_pair(f,b);
    auto loc = std::find(colorIDs.begin(), colorIDs.end(), p);
    if (loc != colorIDs.end()) {
        return COLOR_PAIR(std::distance(colorIDs.begin(), loc));
    } else {
        colorIDs.push_back(p);
        init_pair(colorIDs.size()-1, f, b);
        return COLOR_PAIR(colorIDs.size()-1);
    }
}

void Color::activate() const {
    attron(getColorID(fore, back));
}

bool Color::operator==(const Color& with) const {
    return fore == with.fore && back == with.back;
}

bool Color::operator!=(const Color& with) const {
    return fore != with.fore || back != with.back;
}
