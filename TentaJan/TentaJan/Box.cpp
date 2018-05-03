#include "Box.h"


Box::Box() : Shape3D()
{
	this->lenght = 0.0;
	this->widht = 0.0;
}
Box::Box(double height, double widht, double lenght)
	: Shape3D(height)
{
	this->widht = widht;
	this->lenght = lenght;
}
Box::~Box(){}

double Box::getVolume() const
{
	return (this->lenght*this->widht*getHight());
}
double Box::getLenght() const
{
	return this->lenght;
}
double Box::getWidht() const
{
	return this->widht;
}

Box* Box::clone() const
{
	return new Box(*this);
}
string Box::toStringSpecific() const
{
	return to_string(this->widht) + " " + to_string(this->lenght);
}