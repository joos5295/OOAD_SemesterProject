//
// Created by joel on 4/24/19.
//

#ifndef OOAD_SEMESTERPROJECT_SLIDER_H
#define OOAD_SEMESTERPROJECT_SLIDER_H

#include "UIElement.h"

class Slider : public UIElement {
protected:
    int width;
    int pos = 0;
    
public:
    explicit Slider(int w);
    Slider(int x, int y, int w);
    
    virtual bool success() const = 0;
    
    void reset();
    
    virtual void update() = 0;
    
    void display() const override;
    virtual void displayInternals() const = 0;
};

#endif //OOAD_SEMESTERPROJECT_SLIDER_H
