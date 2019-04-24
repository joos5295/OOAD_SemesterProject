//
// Created by joel on 4/24/19.
//

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
