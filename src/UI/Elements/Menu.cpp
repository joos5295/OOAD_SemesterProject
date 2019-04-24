//
// Created by user on 2019-04-23.
//

#include <Debug/Debug.h>
#include "UI/Elements/Menu.h"
#include "UI/Input.h"

void Menu::addText(std::string s, int x, int y) {
    addText(s, x, y, Color(Color::White, Color::Black));
}

void Menu::addText(std::string s, int x, int y, Color c) {
    texts.emplace_back(s, x, y, c);
    Debug::println(std::to_string(texts.size()));
}

void Menu::addButton(std::string s, int x, int y) {
    addButton(s, x, y, Color(Color::White, Color::Black));
}

void Menu::addButton(std::string s, int x, int y, Color c) {
    buttons.emplace_back(s, x, y);
    numButtons++;
}

void Menu::display() {
    for (Text t: texts){
        t.display();
    }
    for (Button b: buttons) {
        b.display();
    }
}

int Menu::getSelection() {
    if(numButtons > 0){
        buttons[selected].deSelect();
        selected = 0;
        buttons[selected].select();
    }else{
        Debug::println("No buttons to select from");
        return(-1);
    }

    while(true) {
        display();
        char c = Input::waitInput();
        //Debug::println("got input" + std::to_string(c));
        //stuff to handle input parsing
        switch (c) {
            case 'w':
                if (selected > 0) {
                    buttons[selected].deSelect();
                    selected--;
                    buttons[selected].select();
                }
                break;
            case 's':
                if (selected < numButtons - 1) {
                    buttons[selected].deSelect();
                    selected++;
                    buttons[selected].select();
                }
                break;
            case ' ':
                return (selected);
        }
    }
}