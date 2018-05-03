#pragma once
#include"Shape.h"

class Box : public Shape
{
private:
	double lenght;
	double width;
public:
	Box(double height=0.0, double width=0.0, double length = 0.0);

	virtual~Box();
	Box* clone() const;

	double getWidth() const;
	double getLenght() const;

	double getVolym() const;
	string toStringSpec() const;
	  
};