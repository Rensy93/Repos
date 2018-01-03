#include "HorisontalShape.h"

HorisontalShape::HorisontalShape(int x, int y, int width, int height, int step)
	:Shape(x, y, width, height, step)
{
	this->xDirection = x;
}
HorisontalShape::~HorisontalShape(){}
void HorisontalShape::changeDirection()
{
	this->xDirection *= -1;
}

string HorisontalShape::getDirectionAsString() const
{
	string direction;

	if (this->xDirection > 0)
	{
		direction = RIGHT;
	}
	else if (this->xDirection < 0)
	{
		direction = LEFT;
	}
	return "Direction: " + direction;
}

string HorisontalShape::startString() const
{
	return "Horisontal:";
}

void HorisontalShape::move()
{
	if (xDirection > 0)
	{
		this->changeCoord(this->getStep(), 0);
	}
	else
	{
		this->changeCoord(-this->getStep(), 0);
	}
}

HorisontalShape *HorisontalShape::clone()
{
	return new HorisontalShape(*this);
}