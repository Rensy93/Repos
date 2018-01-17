#pragma once
#include <string>
using namespace std;

class Shape3D
{

private:

	double hight;


public:

	Shape3D();
	Shape3D(int hight);
	virtual ~Shape3D();

	double getHight() const;
	virtual double getVolume() const = 0;
	virtual Shape3D* clone()const = 0;

	//betty special
	string toString() const;
	virtual string toStringSpecific() const = 0;

};