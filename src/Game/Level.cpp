//
// Created by user on 4/16/19.
//

#include "Game/Level.h"
#include "Assets/AssetManager.h"
#include "Debug/Debug.h"
#include "UI/Display.h"

Level::Level(int n) : terrainMap(AssetManager::loadTerrain("level-" + std::to_string(n) + ".txt")) {
    Debug::print("loading leve");
    Debug::println(std::to_string(n));
}

void Level::display() const {
    Display::write(*terrainMap);
}
