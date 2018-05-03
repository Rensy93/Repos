#include "Shape.h"

Shape::Shape(double height)
{
	this->height = height;
}

Shape::~Shape()
{

}

double Shape::getHeight() const
{
	return this->height;
}

void Shape::setHeight(double h)
{
	this->height = h;
}
string Shape::toString() const
{
	stringstream out;
	out << "The height is " << this->getHeight() << this->toStringSpec();
	return out.str();
}