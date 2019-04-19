//
// Created by joel on 4/9/19.
//

#ifndef OOAD_SEMESTERPROJECT_INPUT_H
#define OOAD_SEMESTERPROJECT_INPUT_H

class Input {
public:
    Input() = delete;
    ~Input() = delete;

    static void init();

    static char getInput();
    static char waitInput();
};

#endif //OOAD_SEMESTERPROJECT_INPUT_H
