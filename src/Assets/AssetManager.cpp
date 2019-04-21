//
// Created by joel on 4/10/19.
//

#include <fstream>
#include <Game/Terrain/Empty.h>
#include "Assets/AssetManager.h"
#include "Debug/Debug.h"
#include "Game/Terrain/Wall.h"
#include "Game/Terrain/Grass.h"
#include "Game/Terrain/Empty.h"

std::unordered_map<std::string,GlyphMap> AssetManager::glyphMaps;
std::unordered_map<std::string,TerrainMap> AssetManager::terrainMaps;

void AssetManager::readArt(std::string s) {
    std::string path = "../assets/" + s;
    int W = -1;
    int H = 0;
    std::ifstream file(path);
    if (!file.is_open()) {
        Debug::print("Asset File ");
        Debug::print(s);
        Debug::println(" not found.");
        Debug::close();
        exit(-1);
    }
    std::vector<Glyph> cells;
    Color::Value fore = Color::White;
    Color::Value back = Color::Black;
    std::string line;
    while (!file.eof()) {
        std::getline(file, line);
        H++;
        int width = 0;
        for (auto i = line.begin(); i != line.end(); i++) {
            char c = *i;
            if (c != 'F' && c != 'B') {
                cells.emplace_back(c, fore, back);
                width++;
            } else {
                int pos = i - line.begin();
                char tag = *(i+1);
                Color::Value color;
                switch (tag) {
                    case 'b':
                        color = Color::Black;
                        break;
                    case 'r':
                        color = Color::Red;
                        break;
                    case 'g':
                        color = Color::Green;
                        break;
                    case 'y':
                        color = Color::Yellow;
                        break;
                    case 'u':
                        color = Color::Blue;
                        break;
                    case 'm':
                        color = Color::Magenta;
                        break;
                    case 'c':
                        color = Color::Cyan;
                        break;
                    case 'w':
                        color = Color::White;
                        break;
                    default:
                        Debug::print("Unrecognized tag: ");
                        Debug::println(std::to_string(tag));
                        Debug::close();
                        exit(-1);
                        break;
                }
                if (c == 'F')
                    fore = color;
                else
                    back = color;
                i++;
            }
        }
        if (W == -1)
            W = width;
        else if (width < W) {
            for (int i = 0; i < W - width; i++) {
                cells.emplace_back(' ', Color::Black, Color::Black);
            }
        }
        else if (width > W) {
            Debug::print("Width of Asset File ");
            Debug::print(s);
            Debug::println(" is inconsistent");
            Debug::close();
            exit(-1);
        }
    }
    GlyphMap m(cells, H, W);
    glyphMaps.insert(std::make_pair(s,m));
}

const GlyphMap* AssetManager::loadArt(std::string s) {
    if (!glyphMaps.count(s)) {
        readArt(s);
    }
    return &glyphMaps.at(s);
}

void AssetManager::readTerrain(std::string s) {

    //Tiles
    Terrain* empty = Empty::getInstance();
    Terrain* wall = Wall::getInstance();
    Terrain* grass = Grass::getInstance();

    std::string path = "../assets/" + s;
    int W = -1;
    int H = 0;
    std::ifstream file(path);
    if (!file.is_open()) {
        Debug::print("Asset File ");
        Debug::print(s);
        Debug::println(" not found.");
        Debug::close();
        exit(-1);
    }
    std::vector<Terrain*> cells;
    std::string line;
    while (!file.eof()) {
        std::getline(file, line);
        H++;
        int width = 0;
        for (auto i = line.begin(); i != line.end(); i++) {
            char ch = *i;
            switch (ch) {
                case ' ':
                    cells.push_back(empty);
                    width++;
                    break;
                case 'w':
                    cells.push_back(wall);
                    width++;
                    break;
                case 'g':
                    cells.push_back(grass);
                    width++;
                    break;
                default:
                    Debug::println("unrecognized terrain char");
                    exit(1);
            }
        }
        if (W == -1)
            W = width;
        else if (width < W) {
            for (int i = 0; i < W - width; i++) {
                cells.push_back(empty);
            }
        }
        else if (width > W) {
            Debug::print("Width of Asset File ");
            Debug::print(s);
            Debug::println(" is inconsistent");
            Debug::close();
            exit(-1);
        }
    }
    TerrainMap m(cells, H, W);
    terrainMaps.insert(std::make_pair(s,m));
}

const TerrainMap* AssetManager::loadTerrain(std::string s) {
    if (!terrainMaps.count(s)) {
        readTerrain(s);
    }
    return &terrainMaps.at(s);
}