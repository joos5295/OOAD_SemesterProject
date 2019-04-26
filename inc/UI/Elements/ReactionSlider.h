//
// Created by joel on 4/24/19.
//

/*
 * When updated, it moves an arrow across the bar.
 * The user must press the space bar before it reaches
 * the end. Getting input and dealing damange are not
 * part of the responsibilites of the slider; just deciding whether
 * or not damage should be dealt.
 */

#ifndef OOAD_SEMESTERPROJECT_REACTIONSLIDER_H
#define OOAD_SEMESTERPROJECT_REACTIONSLIDER_H

#include "Slider.h"

class ReactionSlider : public Slider {
public:
    explicit ReactionSlider(int w);
    ReactionSlider(int x,int y,int w);
    ~ReactionSlider() = default;

    void update() override;

    void displayInternals() const override;
    
    bool success() const override;
};

#endif //OOAD_SEMESTERPROJECT_REACTIONSLIDER_H
