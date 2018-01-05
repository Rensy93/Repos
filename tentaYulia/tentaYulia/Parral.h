#pragma once
#include"Geom.h"

using namespace std;

class Parral: public Geom
{
private:
	int lenght;
	int wight;

public:
	Parral(int hight, int lenght = 0, int wight = 0);
	virtual~Parral();

	int getWight() const;
	int getLenght() const;

	void setWight(int wi);
	void setLenght(int le);

	double getVol() const;
	Parral *clone() const;
	string toStringSpec() const;
};