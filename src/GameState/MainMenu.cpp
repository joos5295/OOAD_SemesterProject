//
// Created by user on 4/16/19.
//

#include <Debug/Debug.h>
#include "GameState/MainMenu.h"
#include "UI/Elements/Button.h"
#include "UI/Display.h"
#include "GameState/GameStateFactory.h"
#include "UI/Input.h"

MainMenu::MainMenu() : start("Start",2, 3), exit("Exit", 2, 5), instructions("Move/select with 'wasd', enter selected button with 'Space'.", 2, 1, Color(Color::Cyan, Color::Black)){
    start.select();
    buttons = {start, exit};
}

void MainMenu::display() {
    //display the instructions
    instructions.display();

    //display the buttons
    for (Button b: buttons) {
        b.display();
    }
}

GameState* MainMenu::update() {

    char c = Input::waitInput();
    //stuff to handle input parsing
    switch(c) {
        case 'w':
            if( buttonId > 0) {
                buttons[buttonId].deSelect();
                buttonId--;
                buttons[buttonId].select();
            }
            break;
        case 's':
            if( buttonId < buttonCount-1) {
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