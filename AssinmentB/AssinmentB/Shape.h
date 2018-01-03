#pragma once
#include "Box.h"
#include "Coord.h"
#include <string>

using namespace std;

const std::string UP = "UP";
const std::string DOWN = "DOWN";
const std::string LEFT = "LEFT";
const std::string RIGHT = "RIGHT";

class Shape
{
private:
	int step;
	Coord *coord;
	Box *box;

public:

	Shape(int x, int y, int width, int height, int step);
	Shape(Shape &otherObject);
	virtual ~Shape();
	virtual Shape* clone() = 0;

	void changeCoord(const int xChange, const int yChange);
	int getStep() const;
	void changeStep(const int change);
	bool intersectsWith(const Shape &otherShape);
	string toString() const;
	virtual void changeDirection() = 0;
	virtual string getDirectionAsString() const = 0;
	virtual string startString() const = 0;
	virtual void move() = 0;

};