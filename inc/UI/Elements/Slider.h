//
// Created by joel on 4/23/19.
//

#ifndef OOAD_SEMESTERPROJECT_SLIDER_H
#define OOAD_SEMESTERPROJECT_SLIDER_H

#include "UIElement.h"

class Slider : public UIElement {
    int width; 
    int rangeStart;
    int rangeEnd;
    
    int pos;
    bool active;
    
public:
    Slider();
    Slider(int,int,int);
    Slider(int,int,int,int,int);
    ~Slider() = default;
    
    void update();
    
    void display() const override;
    
    void stop();
    bool success() const;
    
    void setAttributes(int w,int rs,int re);
};

#endif //OOAD_SEMESTERPROJECT_SLIDER_H
