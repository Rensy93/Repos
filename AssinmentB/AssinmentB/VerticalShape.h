#pragma once
#include "Shape.h"
#include <string>

using namespace std;

class VerticalShape : public Shape
{
private:
	int yDirection;
public:
	VerticalShape(int x, int y, int width, int height, int step);
	~VerticalShape();
	void changeDirection();
	string getDirectionAsString() const;
	string startString() const;
	void move();
	VerticalShape* clone();
};