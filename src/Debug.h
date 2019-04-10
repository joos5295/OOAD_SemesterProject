//
// Created by joel on 4/10/19.
//

/*
 * Typical use of Debug is as follows:
 *  Debug::init()
 *  Debug::println(s)
 *  more Debug::print / println
 *  Debug::close()
 *
 * Results will be viewable in real time using
 *  tail -F debug.txt
 * in the root of this repo.
 *
 * Do not add the debug file to git.
 */

#ifndef OOAD_SEMESTERPROJECT_DEBUG_H
#define OOAD_SEMESTERPROJECT_DEBUG_H

#include <string>
#include <fstream>

class Debug {
    static std::ofstream file;

public:
    static void init();
    static void print(std::string);
    static void println(std::string);
    static void close();
};

#endif //OOAD_SEMESTERPROJECT_DEBUG_H
