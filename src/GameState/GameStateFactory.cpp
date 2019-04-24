//
// Created by Joel Courtney on 2019-04-21.
//

#include "GameState/GameStateFactory.h"

GameState* GameStateFactory::mainMenu() {
    return new MainMenu();
}

GameState* GameStateFactory::mainMenu(GameState* old) {
    delete old;
    return new MainMenu();
}

GameState* GameStateFactory::dungeon(GameState* old) {
    delete old;
    return new Dungeon();
}

GameState* GameStateFactory::dungeon(Dungeon* d, Encounter* old) {
    delete old;
    return d;
}

GameState* GameStateFactory::encounter(Player* p, Enemy* e, Dungeon* d) {
    return new Encounter(p,e,d);
}

GameState* GameStateFactory::ending(int ending, GameState* old) {
    delete old;
    return new Ending(ending);
}

GameState* GameStateFactory::exit(GameState* old) {
    delete old;
    return nullptr;
}
