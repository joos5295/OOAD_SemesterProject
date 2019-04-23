//
// Created by user on 4/16/19.
//

#include "GameState/Encounter.h"
#include "Debug/Debug.h"
#include "GameState/GameStateFactory.h"
#include "UI/Input.h"
#include "UI/Display.h"

Encounter::Encounter(Player* p, Enemy* e, Dungeon* d) : player(p), enemy(e), dungeon(d) {}

void Encounter::display() {
    int playerWidth = player->getEncounterArtWidth();
    int playerHeight = player->getEncounterArtHeight();
    int enemyWidth = enemy->getEncounterArtWidth();
    int enemyHeight = enemy->getEncounterArtHeight();
    int maxWidth = (playerWidth>enemyWidth)?playerWidth:enemyWidth;
    int maxHeight = (playerHeight>enemyHeight)?playerHeight:enemyHeight;
    
    Display::box(maxWidth+1, maxHeight + 1, 0, 0);
    Display::box(maxWidth+1, maxHeight+1, maxWidth+1, 0);
    player->display(1+(maxWidth-playerWidth)/2,1+(maxHeight-playerHeight)/2);
    enemy->display(maxWidth+2+(maxWidth-enemyWidth)/2,1+(maxHeight-enemyHeight)/2);
}

GameState* Encounter::update() {
    char c = Input::waitInput();
    return GameStateFactory::dungeon(dungeon, this);
}
