#include <iostream>
#include "UI/Display.h"

#include "UI/Basic/Glyph.h"
#include <chrono>
#include <thread>
#include <ncurses.h>
#include "UI/Input.h"
#include "Debug/Debug.h"
#include "Assets/AssetManager.h"
#include "Game/Game.h"

int main() {
    Display::init();
    Debug::init();
    Input::init();

    //Initialize the game
    Game g = Game();
    //Start the game
    g.run();

    Display::close();
    Debug::close();
    return 0;
}