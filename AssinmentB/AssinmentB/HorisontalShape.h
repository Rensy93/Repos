#pragma once
#include "Shape.h"
#include <string>

using namespace std;

class HorisontalShape : public Shape
{
private:
	int xDirection;
public:
	HorisontalShape(int x, int y, int width, int height, int step);
	~HorisontalShape();
	void changeDirection();
	string getDirectionAsString() const;
	string startString() const;
	void move();
	HorisontalShape* clone();
};