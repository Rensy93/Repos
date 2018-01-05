#pragma once
#include"GeoGig.h"

using namespace std;

class Cirkel : public GeoFig
{
private:
	double radien;

public:
	Cirkel(int x, int y, double radien =0.0);
	virtual~Cirkel();

	double getRadie() const;

	void changeRadien(double radie);

	string toStringSpec() const;




};