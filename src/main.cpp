#include <iostream>
#include "UI/Display.h"

#include "UI/Cell.h"
#include <chrono>
#include <thread>
#include <ncurses.h>
#include "UI/Input.h"
#include "Debug/Debug.h"
#include "Imports/AssetManager.h"

int main() {
    Display::init();
    Debug::init();
    Input in;
    Cell g1('g', Color::Red, Color::Green);
    Cell g2('h', Color::White);
    Cell g3('i', Color::Blue);
    Cell g4('j', Color::White);
    std::vector<Cell> arr = {g1, g2, g3, g4, g1, g3};
    CellMatrix m(arr, 3,2);
    for (int count = 0; count < 100000; count++) {
        Display::begin();
        Display::write(m);
        Display::write(m,2,2);
        const CellMatrix test = AssetManager::load("demo.txt");
        Display::write(test,10,10);
        Display::write(g2, 5, 4);
        Display::commit();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        char c = in.getInput();
        if (c) {
            break;
        }
    }
    Display::close();
    std::this_thread::sleep_for(std::chrono::seconds(5));
    Debug::close();
    return 0;
}