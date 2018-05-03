#pragma once
#include<string>
#include<sstream>

using namespace std;

class Shape
{
private:
	double height;

public:
	Shape(double height = 0.0);
	virtual~Shape();

	double getHeight() const;
	
	void setHeight(double h);
	string toString() const;
	virtual Shape *clone() const=0;

	virtual double getVolym() const=0;

	virtual string toStringSpec() const=0;

	

};