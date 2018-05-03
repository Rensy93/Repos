#pragma once
#include "Shape.h"

using namespace std;


class Cone: public Shape
{
private:
	double radie;


public:
	Cone(double height = 0.0, double radie = 0.0);
	virtual ~Cone();

	double getRadie() const;
	void setRadie(double r);
	double getVolym() const;
	Cone* clone() const;
	string toStringSpec() const;
};