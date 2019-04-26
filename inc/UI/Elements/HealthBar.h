//
// Created by joel on 4/24/19.
//

/*
 * Responsible for converting a health total into
 * visual representation. It is not the primary
 * holder for the health total, it just has a copy of it,
 * and is not responsible for maintaining or managing health;
 * just displaying it.
 */

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
