#pragma once
#include<sstream>
#include<string>
using namespace std;

class Geom
{
private:
	int hight;


public:
	Geom(int hight = 0);
	virtual~Geom();
	

	int getHight() const;

	void setHight(int h);

	virtual string toStringSpec() const = 0;
	virtual double getVol() const = 0;
	string toString() const;

	virtual Geom *clone() const = 0;
};