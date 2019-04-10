//
// Created by joel on 4/10/19.
//

#include "Debug.h"
#include <chrono>

std::ofstream Debug::file;

void Debug::init() {
    file.open("../debug.txt", std::ios_base::app);
    auto t = std::chrono::system_clock::now();
    file << "Running:" << std::endl;
}

void Debug::print(std::string s) {
    file << s << std::flush;
}

void Debug::println(std::string s) {
    file << s << std::endl;
}

void Debug::close() {
    file << std::endl << std::endl;
    file.close();
}
