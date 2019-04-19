//
// Created by user on 4/16/19.
//

#include <Debug/Debug.h>
#include "GameState/MenuState.h"
#include "UI/Button.h"
#include "UI/Display.h"

MenuState::MenuState() : start("Start",1, 1), exit("Exit", 1, 3){
    //Debug::println("Initializing Menu State");
    start.select();
    buttons = {start, exit};
    for (Button b: buttons){
        //Debug::println("Printing state of a button");
        if(b.isSelected){
            //Debug::println("Button is selected");
        }else{
            //Debug::println("Button is not selected");
        }
    }
}

void MenuState::Update(char c){

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
    }

    //Debug::println("changed button ID");

    //drawing stuff, to be moved to a different function
    //Debug::println("printing options");

    Display::begin();
    for (Button b: buttons){
        /*Debug::println("Printing state of a button");
        if(b.isSelected){
            Debug::println("Button is selected");
        }else{
            Debug::println("Button is not selected");
        }*/
        b.drawSelf();
    }
    Display::commit();
}