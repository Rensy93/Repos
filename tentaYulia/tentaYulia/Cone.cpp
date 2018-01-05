#include"Cone.h"
#include <cmath>
using namespace std;

Cone::Cone(int hight, double radie)
	:Geom(hight)
{
	this->radie = radie;
}
Cone::~Cone()
{}

Cone* Cone::clone() const
{
	return new Cone(*this);
}
double Cone::getVol() const
{
	double vol = (PI*pow(radie,2)*getHight()) / 3;
	return vol;
}
double Cone::getRadie() const
{
	return this->radie;
}

void Cone::setRadie(double rad)
{
	this->radie = rad;
}

string Cone::toStringSpec() const
{
	stringstream out;
	out << "The volume of the cone is " << this->getVol() << "\n";
	return out.str();
}
