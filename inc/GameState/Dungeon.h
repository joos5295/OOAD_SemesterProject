//
// Created by user on 4/16/19.
//

/*
 * The dungeon state manages the movement portion of gameplay.
 * It takes WASD inputs and updates the player object. When
 * an enemy is met it generates an Encounter state.
 */

#ifndef OOAD_SEMESTERPROJECT_DUNGEON_H
#define OOAD_SEMESTERPROJECT_DUNGEON_H

#include "GameState.h"
#include "Game/Level.h"

class Dungeon : public GameState {
private:
    Level* level = nullptr;
    Player player;
    int nextLevel = 1;
    void startNextLevel();  //loads the next level and increments current level if it exists, otherwise should declare victory.

public:
    Dungeon();
    ~Dungeon() override = default;

    void display() const override;
    GameState* update() override;

    void removeEnemy(Enemy*);
};

#endif //OOAD_SEMESTERPROJECT_DUNGEON_H
