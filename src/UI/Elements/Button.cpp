//
// Created by user on 2019-04-19.
//

#include <UI/Display.h>
#include "UI/Elements/Button.h"
#include "UI/Basic/Glyph.h"
#include "Debug/Debug.h"

Button::Button(std::string text, int xIn, int yIn) : UIElement(xIn,yIn), normal(text, xIn, yIn, Color(Color::White, Color::Black)), selected(text, xIn, yIn, Color(Color::Black, Color::White)){
    isSelected = false;
}

void Button::select() {
    isSelected = true;
}
void Button::deSelect() {
    isSelected = false;
}

void Button::display() const {
    if(isSelected){
        selected.display();
    }else{
        normal.display();
    }
}