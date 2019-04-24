//
// Created by user on 2019-04-23.
//

#include <Debug/Debug.h>
#include <GameState/GameStateFactory.h>
#include "GameState/Ending.h"
#include "UI/Elements/Menu.h"
#include "GameState/GameStateFactory.h"

Ending::Ending(){
    m = new Menu();
    setupEnding(0);
}

Ending::Ending(int e){
    m = new Menu();
    setupEnding(e);
}

void Ending::setupEnding(int e){
    switch(e){
        case 1:
            m->addText("You Died", 2, 1);
            break;
        default:
            m->addText("You Win!", 2, 1);
            break;
    }
    m->addButton("Restart", 2, 4);
    m->addButton("Main Menu", 2, 5);
    m->addButton("Exit", 2, 6);
}

void Ending::display() {
    m->display();
}

GameState* Ending::update() {
    int i = m->getSelection();
    switch (i){
        case 0:
            return GameStateFactory::dungeon(this);
        case 1:
            return GameStateFactory::mainMenu(this);
        case 2:
            return GameStateFactory::exit(this);
    }
    return(this);
}