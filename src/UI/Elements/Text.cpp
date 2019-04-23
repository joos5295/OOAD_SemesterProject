//
// Created by user on 2019-04-19.
//

#include <UI/Display.h>
#include "UI/Elements/Text.h"
#include "Debug/Debug.h"

Text::Text(std::string text, int xIn, int yIn, Color col) : UIElement(xIn,yIn) {
    std::vector<Glyph> g;   //normal version
    int length = text.length();
    for(int j = 0; j < length; j++){
        char c = text[j];
        g.emplace_back(c, col);
    }

    data = new GlyphMap(g, 1, length);
}

void Text::display() const {
    Display::write(*data, x, y);
}