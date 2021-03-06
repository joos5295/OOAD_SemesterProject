//
// Created by user on 4/16/19.
//

#include "Game/Actors/Player.h"
#include "Debug/Debug.h"
#include "Assets/AssetManager.h"

Player::Player() : Entity(1, 1, 0, 0, Glyph('I', Color::Green), AssetManager::loadArt("knight.txt")) {
    healthBar.setAlignment(true);
}

int Player::getX() const {
    return posX;
}

int Player::getY() const {
    return posY;
}

void Player::move(int dx, int dy) {
    posX += dx;
    posY += dy;
}

void Player::moveTo(int x,int y) {
    posX = x;
    posY = y;
}

void Player::heal(int h) {
    health += h;
    healthBar.setHealth(health);
}

void Player::enterGoal() {
    //Debug::println("reached the goal");
    atGoal = true;
}

void Player::enterLevel() {
    //Debug::println("entering a new level");
    atGoal = false;
}

bool Player::isAtGoal() const {
    return atGoal;
}

bool Player::isFriendly() const {
    return true;
}
