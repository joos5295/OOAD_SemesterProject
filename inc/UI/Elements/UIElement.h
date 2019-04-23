//
// Created by joel on 4/23/19.
//

#ifndef OOAD_SEMESTERPROJECT_UIELEMENT_H
#define OOAD_SEMESTERPROJECT_UIELEMENT_H

class UIElement {
protected:
    int x;
    int y;
    
public:
    UIElement(int,int);
    
    virtual void display() const = 0;
    
    void setPos(int,int);
};

#endif //OOAD_SEMESTERPROJECT_UIELEMENT_H
