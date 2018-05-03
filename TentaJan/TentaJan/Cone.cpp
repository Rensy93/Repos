#include "Cone.h"
#include <cmath>

Cone::Cone() : Shape3D()
{
	this->radius = 0.0;
}
Cone::Cone(double hight, double radius)
	:Shape3D(hight)
{
	this->radius = radius;
}
Cone::~Cone(){}

double Cone::getVolume() const
{
	return (PI*pow(this->radius, 2)*(getHight() / 3));
}
double Cone::getRadius() const
{
	return this->radius;
}

Cone* Cone::clone() const
{
	return new Cone(*this);
}
string Cone::toStringSpecific() const
{
	return to_string(this->radius);
}