//
// Created by user on 4/16/19.
//

/*
 * The encounter state manages the combat portion of
 * gameplay. It alternates between attack and defense.
 * If the player dies it generates the Ending state.
 * If the enemy dies it restores the dungeon state.
 */

#ifndef OOAD_SEMESTERPROJECT_ENCOUNTER_H
#define OOAD_SEMESTERPROJECT_ENCOUNTER_H

#include "UI/Elements/TimingSlider.h"
#include "Game/Actors/Enemy.h"
#include "Game/Actors/Player.h"
#include "Dungeon.h"

class Encounter: public GameState {
    Player* player;
    Enemy* enemy;
    Dungeon* dungeon;
    
    int maxWidth;
    int maxHeight;
    
    bool attacking = true;
    TimingSlider* attackSlider;
    ReactionSlider* defenseSlider;
    
    int wait = 0;
    bool transition = false;

public:
    explicit Encounter(Player*, Enemy*, Dungeon*);
    ~Encounter() override = default;

    void display() const override;
    GameState* update() override;
};

#endif //OOAD_SEMESTERPROJECT_ENCOUNTER_H
