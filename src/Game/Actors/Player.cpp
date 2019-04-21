//
// Created by user on 4/16/19.
//

#include "Game/Actors/Player.h"
#include "Assets/AssetManager.h"

Player::Player() : Entity(10, AssetManager::loadArt("player.txt")) {}

int Player::getX() {return posX;}
int Player::getY() {return posY;}
