#pragma once

#include "Figure.h"

class Box: public Figure 
{
private:
	double lenght;
	double wight;

public:
	Box(double wight = 0.0, double height = 0.0, double lenght = 0.0);
	virtual~Box();

	Box* clone() const;
	double getLenght() const;
	double getWight() const;
	double getVol() const;

	string toStringSpec() const;

};