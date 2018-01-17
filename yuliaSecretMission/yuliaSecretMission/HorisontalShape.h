//
// Created by Yulia Lizneva on 2017-12-09.
//

#ifndef UNTITLED6_HORISONTALSHAPE_H
#define UNTITLED6_HORISONTALSHAPE_H

#include "Shape.h"

class HorisontalShape :public Shape
{
private:
    int xDirection;


public:
    HorisontalShape(int xDirection, int y, int width, int height, int step);
    ~HorisontalShape();
    HorisontalShape(const HorisontalShape& original);
    HorisontalShape* clone() const;
    void changeDirection();
    string getDirectionAsString() const;
    string startString() const;
    void move();

};


#endif //UNTITLED6_HORISONTALSHAPE_H
