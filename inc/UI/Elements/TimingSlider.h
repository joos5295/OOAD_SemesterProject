//
// Created by joel on 4/23/19.
//

/*
 * When updated, the TimingSlider moves a cursor across
 * its width in a cycle. If the player hits the space bar
 * inside the target range, they do damage to the enemy.
 * This class is not responsible for input or dealing damage,
 * just deciding whether to do damage.
 */

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
