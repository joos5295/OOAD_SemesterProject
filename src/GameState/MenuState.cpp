//
// Created by user on 4/16/19.
//

#include <Debug/Debug.h>
#include "GameState/MenuState.h"
#include "UI/Button.h"
#include "UI/Display.h"

MenuState::MenuState() : start("Start",2, 3), exit("Exit", 2, 5), instructions("Move/select with 'wasd', enter selected button with 'Space'.", 2, 1, Color(Color::Cyan, Color::Black)){
    start.select();
    buttons = {start, exit};
}

void MenuState::display(){
    Display::begin();

    //display the instructions
    instructions.drawSelf();

    //display the buttons
    for (Button b: buttons){
        b.drawSelf();
    }

    Display::commit();
}

int MenuState::Update(char c){

    //stuff to handle input parsing
    switch(c){
        case 'w':
            if( buttonId > 0){
                buttons[buttonId].deSelect();
                buttonId--;
                buttons[buttonId].select();
            }
            break;
        case 's':
            if( buttonId < buttonCount-1){
                buttons[buttonId].deSelect();
                buttonId++;
                buttons[buttonId].select();
            }
            break;
        case ' ':
            if(buttonId == 0){return(1);}
            else if(buttonId == 1){return(-1);}
            break;
        default:
            break;
    }
    return(0);
}