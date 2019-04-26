//
// Created by user on 4/16/19.
//

#include <Debug/Debug.h>
#include "GameState/MainMenu.h"
#include "UI/Elements/Button.h"
#include "UI/Display.h"
#include "GameState/GameStateFactory.h"
#include "UI/Input.h"

MainMenu::MainMenu(){
    m = new Menu();
    m->addText("Welcome to Dungeon!", 2, 1, Color(Color::Cyan, Color::Black));
    m->addText("Move/select with 'wasd', enter selected button with 'Space'.", 2, 3);
    m->addText("When attacking press 'Space' over the blue region to hit.", 2, 4);
    m->addText("When defending press 'Space' to stop the red arrow before the end of the bar.", 2, 5);
    m->addButton("Start",2, 7);
    m->addButton("Exit", 2, 9);

}

void MainMenu::display() const {
    m->display();
}

GameState* MainMenu::update() {
    int i = m->getSelection();
    switch (i){
        case 0:
            return GameStateFactory::dungeon(this);
        case 1:
            return GameStateFactory::exit(this);
    }
    return this;
}

MainMenu::~MainMenu(){
    delete(m);
}