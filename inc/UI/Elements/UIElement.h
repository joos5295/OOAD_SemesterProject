//
// Created by joel on 4/23/19.
//

/*
 * A general abstract class for higher-level
 * objects that can display themselves on the screen.
 */

#ifndef OOAD_SEMESTERPROJECT_UIELEMENT_H
#define OOAD_SEMESTERPROJECT_UIELEMENT_H

class UIElement {
protected:
    int x = -1;
    int y = -1;
    
public:
    UIElement() = default;
    UIElement(int,int);
    
    virtual void display() const = 0;
    
    void setPos(int,int);
};

#endif //OOAD_SEMESTERPROJECT_UIELEMENT_H
