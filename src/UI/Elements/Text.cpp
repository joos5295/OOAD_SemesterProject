//
// Created by user on 2019-04-19.
//

#include <UI/Display.h>
#include "UI/Elements/Text.h"

Text::Text(std::string text, int xIn, int yIn, Color col){

    x = xIn;
    y = yIn;

    std::vector<Glyph> g;   //normal version
    int length = text.length();
    for(int j = 0; j < length; j++){
        char c = text[j];
        g.emplace_back(c, col);
    }

    data = new GlyphMap(g, 1, length);
}

void Text::drawSelf() {
    Display::write(*data, x, y);
}