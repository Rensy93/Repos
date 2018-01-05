#include "VerticalShape.h"

VerticalShape::VerticalShape(int x, int y, int width, int height, int step)
	:Shape(x, y, width, height, step)
{
	this->yDirection = y;
}
VerticalShape::~VerticalShape(){}

void VerticalShape::changeDirection()
{
	this->yDirection *= -1;
}

string VerticalShape::getDirectionAsString() const
{
	string direction;

	if (this->yDirection > 0)
	{
		direction = DOWN;
	}
	else if (this->yDirection < 0)
	{
		direction = UP;
	}
	return "Direction: " + direction;
}

string VerticalShape::startString() const
{
	return "Vertical:";
}

void VerticalShape::move()
{
	if (yDirection > 0)
	{
		this->changeCoord(0, this->getStep());
	}
	else
	{
		this->changeCoord(0, -this->getStep());
	}
}

VerticalShape * VerticalShape::clone()
{
	return new VerticalShape(*this);
}