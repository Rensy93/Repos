#include "Box.h"

Box::Box(double height, double width, double length)
	:Shape(height)
{
	this->width = width;
	this->lenght = length;
}

Box::~Box()
{

}
Box* Box::clone() const
{
	return new Box(*this);
}
double Box::getWidth() const
{
	return this->width;
}
double Box::getLenght() const
{
	return this->lenght;
}
double Box::getVolym() const
{
	return this->getHeight()*this->width*this->lenght;
}
string Box::toStringSpec() const
{
	stringstream out;
	out << "Width is " << this->width << " Lenght is " << this->lenght << " The volume is " << this->getVolym();
	return out.str();
}