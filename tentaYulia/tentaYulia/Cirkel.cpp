#include"Cirkel.h"

using namespace std;

Cirkel::Cirkel(int x, int y, double radien)
	:GeoFig(x, y)
{
	this->radien = radien;

}
Cirkel::~Cirkel()
{
	
}

double Cirkel::getRadie() const
{
	return this->radien;
}

void Cirkel::changeRadien(double radie)
{
	this->radien = radie;
}

string Cirkel::toStringSpec() const
{
	stringstream out;
	out <<"The radien is "<<this->radien<< endl;
	return out.str();
}
