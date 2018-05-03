//
// Created by Yulia Lizneva on 2017-12-08.
//

#ifndef UNTITLED6_SHAPE_H
#define UNTITLED6_SHAPE_H

#include "Shape.h"
#include "Coord.h"
#include "Box.h"
#include <string>

using namespace std;


const string UP ="UP";
const string DOWN = "DOWN";
const string LEFT = "LEFT";
const string RIGHT = "RIGHT";


class Shape
{
private:
    int step;
    Coord *coord;
    Box *box;
public:

    Shape(int step=0, int width=0, int height=0, int xPos=0, int yPos=0);
    virtual~Shape();

    Shape(const Shape& original);


    virtual Shape* clone() const=0;

    void changeCoord(int xChange, int yChange);
    void changeStep(int change);

    int getStep() const;
    bool intersectsWith(const Shape& otherShape);

    string toString() const;

    virtual void changeDirection() =0;
    virtual string getDirectionAsString() const=0;
    virtual string startString() const=0;
    virtual void move() =0;



};


#endif //UNTITLED6_SHAPE_H
