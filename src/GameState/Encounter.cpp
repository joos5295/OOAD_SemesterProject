//
// Created by user on 4/16/19.
//

#include "GameState/Encounter.h"
#include "Debug/Debug.h"
#include "GameState/GameStateFactory.h"
#include "UI/Input.h"
#include "UI/Display.h"

Encounter::Encounter(Player* p, Enemy* e, Dungeon* d) : player(p), enemy(e), dungeon(d) {
    int playerWidth = player->getEncounterArtWidth();
    int playerHeight = player->getEncounterArtHeight();
    int enemyWidth = enemy->getEncounterArtWidth();
    int enemyHeight = enemy->getEncounterArtHeight();
    maxWidth = (playerWidth>enemyWidth)?playerWidth:enemyWidth;
    maxHeight = (playerHeight>enemyHeight)?playerHeight:enemyHeight;
    
    attackSlider = enemy->getSlider();
    attackSlider.setPos(0,maxHeight+1);
}

void Encounter::display() {
    int playerWidth = player->getEncounterArtWidth();
    int playerHeight = player->getEncounterArtHeight();
    int enemyWidth = enemy->getEncounterArtWidth();
    int enemyHeight = enemy->getEncounterArtHeight();
    if (attacking) {
        attackSlider.display();
    }
    Display::box(maxWidth+1, maxHeight + 1, 0, 0);
    Display::box(maxWidth+1, maxHeight+1, maxWidth+1, 0);
    player->display(1+(maxWidth-playerWidth)/2,1+(maxHeight-playerHeight)/2);
    enemy->display(maxWidth+2+(maxWidth-enemyWidth)/2,1+(maxHeight-enemyHeight)/2);
}

GameState* Encounter::update() {
    if (attacking) {
        attackSlider.update();
    }
    char c = Input::getInput();
    if (c != '\0')
        return GameStateFactory::dungeon(dungeon, this);
    else
        return this;
}
