#pragma once
#include"Geom.h"

using namespace std;


const double PI = 3.1415;
class Cone : public Geom
{
	
private:
	double radie;

public:
	Cone(int hight, double radie = 0.0);
	virtual~Cone();
	Cone *clone() const;

	double getVol() const;
	double getRadie() const;

	void setRadie(double rad);

	string toStringSpec() const;
};