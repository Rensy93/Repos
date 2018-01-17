#pragma once
#include "Shape3D.h"

class Box : public Shape3D
{

private:

	double lenght;
	double widht;

public:

	Box();
	Box(double height, double widht, double lenght);
	virtual ~Box();

	double getVolume() const;
	double getLenght() const;
	double getWidht() const;

	Box* clone() const;
	string toStringSpecific() const;
};

