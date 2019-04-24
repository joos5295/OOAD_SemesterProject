//
// Created by joel on 4/23/19.
//

#ifndef OOAD_SEMESTERPROJECT_TIMINGSLIDER_H
#define OOAD_SEMESTERPROJECT_TIMINGSLIDER_H

#include "UIElement.h"
#include "Slider.h"

class TimingSlider : public Slider {
    int rangeStart;
    int rangeEnd;
    
public:
    TimingSlider(int w,int rs,int re);
    TimingSlider(int x,int y,int w,int rs,int re);
    ~TimingSlider() = default;
    
    void update() override;
    
    void displayInternals() const override;
    
    bool success() const override;
};

#endif //OOAD_SEMESTERPROJECT_TIMINGSLIDER_H
