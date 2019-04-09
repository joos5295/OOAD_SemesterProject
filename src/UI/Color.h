//
// Created by Joel Courtney on 2019-04-09.
//

#ifndef OOAD_SEMESTERPROJECT_COLOR_H
#define OOAD_SEMESTERPROJECT_COLOR_H

class Color {
public:
    enum Value {
        Black,
        Red,
        Green,
        Yellow,
        Blue,
        Magenta,
        Cyan,
        White
    };

private:
    Value value;

public:
    Color() = delete;
    constexpr Color(Value c) : value(c) {}

    void print();

    bool operator==(const Color&) const;
    bool operator!=(const Color&) const;
};

#endif //OOAD_SEMESTERPROJECT_COLOR_H
