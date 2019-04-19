#include <iostream>
#include "UI/Display.h"

#include "UI/Glyph.h"
#include <chrono>
#include <thread>
#include <ncurses.h>
#include "UI/Input.h"
#include "Debug/Debug.h"
#include "Imports/AssetManager.h"

int main() {
    Display::init();
    Debug::init();
    Input::init();
    Glyph g1('g', Color::Red, Color::Green);
    Glyph g2('h', Color::White);
    Glyph g3('i', Color::Blue);
    Glyph g4('j', Color::White);
    std::vector<Glyph> arr = {g1, g2, g3, g4, g1, g3};
    GlyphMap m(arr, 3,2);
    TerrainMap level1 = AssetManager::loadTerrain("Level_1.txt");
    /*for (int count = 0; count < 100; count++) {
        Display::begin();
        Display::write(m);
        Display::write(m,2,2);
        const GlyphMap test = AssetManager::load("demo.txt");
        Display::write(test,10,10);
        Display::write(g2, 5, 4);
        Display::commit();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
     */
    for (int count = 0; count < 1000; count++) {
        Display::begin();
        Display::write(level1);
        Display::commit();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        char c = Input::getInput();
        if (c) {
            break;
        }
    }


    Display::close();
    Debug::close();
    return 0;
}