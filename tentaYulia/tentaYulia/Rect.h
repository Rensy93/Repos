#pragma once
#include"GeoGig.h"

using namespace std;

class Rect: public GeoFig
{
private:
	int hight;
	int wight;

public:
	Rect(int x, int y, int hight=0, int wight=0);
	virtual~Rect();

	int getHight() const;
	int getWight() const;

	void setHight(int hi);
	void setWight(int wi);
	 
	string toStringSpec() const;
	virtual string toStringMot() const=0;
};
