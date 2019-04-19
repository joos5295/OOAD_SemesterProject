//
// Created by user on 2019-04-19.
//

#include <UI/Display.h>
#include "UI/Button.h"
#include "UI/Glyph.h"
#include "Debug/Debug.h"

Button::Button(std::string text) {

    x = 0;
    y = 0;

    std::vector<Glyph> n;   //normal version
    std::vector<Glyph> i;   //selected version
    int length = text.length();
    for(int i = 0; i < length; i++){
        char c = text[i];

    }

    normal = new GlyphMap(n, 1, length);
    selected = new GlyphMap(i, 1, length);

    isSelected = false;
}

Button::Button(std::string text, int xIn, int yIn) {

    x = xIn;
    y = yIn;

    std::vector<Glyph> n;   //normal version
    std::vector<Glyph> i;   //selected version
    int length = text.length();
    for(int j = 0; j < length; j++){
        char c = text[j];
        n.emplace_back(c, Color::White, Color::Black);
        i.emplace_back(c, Color::Black, Color::White);

        /*n.emplace_back(c, Color::White, Color::Black);
        i.emplace_back(c, Color::Black, Color::White);*/

    }

    normal = new GlyphMap(n, 1, length);
    selected = new GlyphMap(i, 1, length);

    isSelected = false;
}

void Button::select() {
    isSelected = true;
}
void Button::deSelect() {
    isSelected = false;
}

void Button::drawSelf() {
    if(isSelected){
        //Debug::println("Printing selected button.");
        Display::write(*selected, x, y);
    }else{
        //Debug::println("Printing unselected button.");
        Display::write(*normal, x, y);
    }
}