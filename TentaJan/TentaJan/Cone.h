#pragma once
#include "Shape3D.h"

const double PI = 3.1415;

class Cone : public Shape3D
{
private:

	double radius;

public:

	Cone();
	Cone(double hight, double radius);
	virtual ~Cone();

	double getVolume() const;
	double getRadius() const;

	Cone* clone() const;
	string toStringSpecific() const;

};