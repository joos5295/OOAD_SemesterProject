//
// Created by user on 4/16/19.
//

#include <Debug/Debug.h>
#include "GameState/Menu.h"
#include "UI/Elements/Button.h"
#include "UI/Display.h"
#include "GameState/GameStateFactory.h"

Menu::Menu() : start("Start",2, 3), exit("Exit", 2, 5), instructions("Move/select with 'wasd', enter selected button with 'Space'.", 2, 1, Color(Color::Cyan, Color::Black)){
    start.select();
    buttons = {start, exit};
}

void Menu::display(){
    //display the instructions
    instructions.drawSelf();

    //display the buttons
    for (Button b: buttons){
        b.drawSelf();
    }
}

GameState* Menu::update(char c){

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
            if(buttonId == 0) {
                return GameStateFactory::dungeon(this);
            } else if(buttonId == 1) {
                return GameStateFactory::exit(this);
            }
        default:
            break;
    }
    return this;
}