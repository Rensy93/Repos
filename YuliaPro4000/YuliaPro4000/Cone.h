#pragma once
#include "Figure.h"

using namespace std;

static const double PI = 3.1415;
class Cone: public Figure
{
private:
	double radie;

public:
	Cone(double radie = 0.0, double height = 0.0);
	virtual~Cone();

	Cone* clone() const;
	double getRadie() const;
	double getVol() const;
	
	void setRadie(double rad);

	string toStringSpec() const;

};
