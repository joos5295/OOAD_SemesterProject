//
// Created by Joel Courtney on 2019-04-21.
//

#include "Game/Actors/EnemyFactory.h"

Enemy EnemyFactory::ogre() {
    return Enemy(5, "ogre.txt");
}
