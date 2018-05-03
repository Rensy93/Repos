#pragma once
#include <sstream>
#include <string>

using namespace std;

class Figure
{
private:
	double height;

public:
	Figure(double height = 0.0);
	virtual~Figure();

	double getHeight() const;

	string toString() const;
	virtual Figure* clone() const = 0;
	virtual string toStringSpec() const = 0;
	virtual double getVol() const = 0;
};