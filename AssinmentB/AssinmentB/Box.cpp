#include "Box.h"

using namespace std;

Box::Box(int width, int height)
{
	this->width = width;
	this->height = height;
}
Box::~Box(){}

int Box::getWidht()const
{
	return this->width;
}
int Box::getHeight()const
{
	return this->height;
}

Box* Box::clone() const
{
	return new Box(*this);
}