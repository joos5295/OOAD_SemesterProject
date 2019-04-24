//
// Created by user on 4/16/19.
//

#include "GameState/Encounter.h"
#include "Debug/Debug.h"
#include "GameState/GameStateFactory.h"
#include "UI/Input.h"
#include "UI/Display.h"
#include <stdlib.h>

Encounter::Encounter(Player* p, Enemy* e, Dungeon* d) : player(p), enemy(e), dungeon(d) {
    int playerWidth = player->getEncounterArtWidth();
    int playerHeight = player->getEncounterArtHeight();
    int enemyWidth = enemy->getEncounterArtWidth();
    int enemyHeight = enemy->getEncounterArtHeight();
    maxWidth = (playerWidth>enemyWidth)?playerWidth:enemyWidth;
    maxHeight = ((playerHeight>enemyHeight)?playerHeight:enemyHeight) + 1;
    
    attackSlider = enemy->getAttackSlider();
    attackSlider->setPos(0,maxHeight+1);
    attackSlider->reset();
    
    defenseSlider = enemy->getDefenseSlider();
    defenseSlider->setPos(0,maxHeight+1);
    
    player->placeHealthBar(1,maxHeight-1);
    enemy->placeHealthBar(maxWidth+2, maxHeight -1);
}

void Encounter::display() {
    int playerWidth = player->getEncounterArtWidth();
    int playerHeight = player->getEncounterArtHeight();
    int enemyWidth = enemy->getEncounterArtWidth();
    int enemyHeight = enemy->getEncounterArtHeight();
    if (attacking) {
        attackSlider->display();
    } else {
        defenseSlider->display();
    }
    Display::box(maxWidth+1, maxHeight + 1, 0, 0);
    Display::box(maxWidth+1, maxHeight+1, maxWidth+1, 0);
    player->display(1+(maxWidth-playerWidth)/2,1+(maxHeight-playerHeight)/2);
    enemy->display(maxWidth+2+(maxWidth-enemyWidth)/2,1+(maxHeight-enemyHeight)/2);
}

GameState* Encounter::update() {
    if (enemy->isDead()) {
        dungeon->removeEnemy(enemy);
        return GameStateFactory::dungeon(dungeon, this);
    }
    if (player->isDead()) {
        return GameStateFactory::ending(1, this);
    }
    if (wait && !transition) {
        Display::wait(wait);
        wait = 0;
        return this;
    }
    if (transition) {
        Display::wait(2000);
        transition = false;
        attacking = !attacking;
        if (attacking)
            attackSlider->reset();
        else
            defenseSlider->reset();
        return this;
    }
    char c = Input::getInput();
    if (attacking) {
        if (c == ' ') {
            if (attackSlider->success()) {
                enemy->takeDamage(player->attack());
            }
            transition = true;
            wait = std::rand() % 3000;
        } else {
            attackSlider->update();
        }
    } else {
        if (c == ' ') {
            if (defenseSlider->success()) {
                transition = true;
            }
        } else {
            if (!defenseSlider->success()) {
                player->takeDamage(enemy->attack());
                transition = true;
            }
        }
        defenseSlider->update();
    }
    return this;
}
