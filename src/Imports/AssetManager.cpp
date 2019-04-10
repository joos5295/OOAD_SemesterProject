//
// Created by joel on 4/10/19.
//

#include <fstream>
#include "Imports/AssetManager.h"
#include "Debug/Debug.h"

std::unordered_map<std::string,CellMatrix> AssetManager::assets;

void AssetManager::read(std::string s) {
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
    std::vector<Cell> cells;
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
    CellMatrix m(cells, H, W);
    assets.insert(std::make_pair(s,m));
}

const CellMatrix AssetManager::load(std::string s) {
    if (!assets.count(s)) {
        read(s);
    }
    return assets.at(s);
}
