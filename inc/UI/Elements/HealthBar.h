//
// Created by joel on 4/24/19.
//

#ifndef OOAD_SEMESTERPROJECT_HEALTHBAR_H
#define OOAD_SEMESTERPROJECT_HEALTHBAR_H

#include "UIElement.h"

class HealthBar : public UIElement {
    int health;
    bool good;
    
public:
    explicit HealthBar(int start);
    explicit HealthBar(int start, bool good);
    HealthBar(int x, int y, int start, bool good);
    ~HealthBar() = default;
    
    void setAlignment(bool);
    
    void setHealth(int h);
    
    void display() const override;
};

#endif //OOAD_SEMESTERPROJECT_HEALTHBAR_H
