//
// Created by Joel Courtney on 2019-04-24.
//

#include "Game/Actors/ItemFactory.h"

Health* ItemFactory::health(int x, int y) {
    return new Health(x,y);
}
