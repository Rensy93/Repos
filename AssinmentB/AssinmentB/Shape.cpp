
#include "Shape.h"
#include "Box.h"
#include "Coord.h"
#include <sstream>


Shape::Shape(int x, int y, int width, int height, int step)
{
	this->coord = new Coord(x, y);
	this->box = new Box(width, height);
	this->step = step;
}
Shape::Shape(const Shape &otherObject)
{
	this->step = otherObject.step;
	Coord* coordPtr = nullptr;
	Box* boxPtr = nullptr;

	this->coord = otherObject.coord->clone();
	this->box = otherObject.box->clone();
}
Shape::~Shape()
{
	delete coord;
	delete box;
}


void Shape::changeCoord(const int xChange, const int yChange)
{
	this->coord->changeXPos(xChange);
	this->coord->changeYPos(yChange);
}

int Shape::getStep() const
{
	return this->step;
}

void Shape::changeStep(const int change)
{
	this->step += change;
}

bool Shape::intersectsWith(const Shape & otherShape)
{
	bool coliding = false;


	int maxWidth = this->coord->getXPos() + this->box->getWidht(),
		minWidth = this->coord->getXPos(),

		otherMaxWidth = otherShape.coord->getXPos() + otherShape.box->getWidht(),
		otherMinWidth = otherShape.coord->getXPos();

	int maxHeight = this->coord->getYPos() + this->box->getHeight(),
		minHeight = this->coord->getYPos(),

		otherMaxHeight = otherShape.coord->getYPos() + otherShape.box->getHeight(),
		otherMinHeight = otherShape.coord->getYPos();

	if ((maxWidth >= otherMinWidth && minWidth <= otherMaxWidth)
		&& (maxHeight >= otherMinHeight && minHeight <= otherMaxHeight))
	{
		coliding = true;
	}

	return coliding;
}

string Shape::toString() const
{
	string statment = "";

	statment = startString() + "Position: x: " + to_string(coord->getXPos()) + " Y: " + to_string(coord->getYPos())
		+ "\n" + getDirectionAsString() + "\n Step: " + to_string(getStep()) + "\n"
		+ "Width: " + to_string(this->box->getWidht()) + " Height: " + to_string(this->box->getHeight());

	return statment;
}
