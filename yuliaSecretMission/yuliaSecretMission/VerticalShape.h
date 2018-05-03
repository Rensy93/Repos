//
// Created by Yulia Lizneva on 2017-12-09.
//

#ifndef UNTITLED6_VERTICALSHAPE_H
#define UNTITLED6_VERTICALSHAPE_H
#include "Shape.h"

class VerticalShape: public Shape
{
private:
    int yDirection;
    

public:

    VerticalShape(int yDirection, int x, int width, int height, int step);
    ~VerticalShape();


    VerticalShape* clone() const;

    VerticalShape(const VerticalShape& original);
    void changeDirection();
    string getDirectionAsString() const;
    string startString() const;
    void move();


};


#endif //UNTITLED6_VERTICALSHAPE_H
