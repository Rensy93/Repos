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
	HorisontalShape(const HorisontalShape& original);
	void changeDirection();
	string getDirectionAsString() const;
	string startString() const;
	void move();
	HorisontalShape* clone() const;
};