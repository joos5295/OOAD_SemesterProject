//
// Created by joel on 4/9/19.
//

/*
 * Interfaces with ncurses to get heyboard
 * input from the user. Can either use getInput()
 * to get a character without blocking, or use
 * waitInput() to block until a character is entered.
 */

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
