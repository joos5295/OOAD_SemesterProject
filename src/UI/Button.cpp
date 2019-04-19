//
// Created by user on 2019-04-19.
//

#include <UI/Display.h>
#include "UI/Button.h"
#include "UI/Glyph.h"
#include "Debug/Debug.h"

/*Button::Button(std::string text) {
    //this should be deprecated
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
}*/

Button::Button(std::string text, int xIn, int yIn) : normal(text, xIn, yIn, Color(Color::White, Color::Black)), selected(text, xIn, yIn, Color(Color::Black, Color::White)){
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
        selected.drawSelf();
    }else{
        normal.drawSelf();
    }
}