#include "Shape3D.h"


Shape3D::Shape3D()
{
	this->hight = 0.0;
}
Shape3D::Shape3D(int hight)
{
	this->hight = hight;
}
Shape3D::~Shape3D() {}

double Shape3D::getHight() const
{
	return this->hight;
}

string Shape3D::toString() const
{
	return to_string(hight) + " " + toStringSpecific();
}


