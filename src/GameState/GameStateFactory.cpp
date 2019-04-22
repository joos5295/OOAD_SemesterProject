//
// Created by Joel Courtney on 2019-04-21.
//

#include "GameState/GameStateFactory.h"

GameState* GameStateFactory::mainMenu() {
    return new Menu();
}

GameState* GameStateFactory::mainMenu(GameState* old) {
    delete old;
    return new Menu();
}

GameState* GameStateFactory::dungeon(Menu* old) {
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

GameState* GameStateFactory::exit(GameState* old) {
    delete old;
    return nullptr;
}
