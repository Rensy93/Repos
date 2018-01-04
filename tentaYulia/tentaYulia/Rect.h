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

	int hight() const;
	int wight() const;

	void hight(int hi);
	void wight(int wi);
	 
	string toStringSpec() const;

};
//hejheh