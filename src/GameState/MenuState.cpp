//
// Created by user on 4/16/19.
//

#include <Debug/Debug.h>
#include "GameState/MenuState.h"
#include "UI/Button.h"

MenuState::MenuState() : start("Start"), exit("Exit"){
    start.select();
}

void MenuState::Update(char c){

    //stuff to handle input parsing
    /*switch(c){
        case 'a':
            if( buttonId > 0){
                buttons[buttonId]
            }
            break;
    }*/

    //drawing stuff, to be moved to a different function
    Debug::println("printing options");
    for (Button b: buttons){
        b.drawSelf();
    }
}