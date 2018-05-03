#include "Cone.h"

using namespace std;

Cone::Cone(double radie, double height)
	:Figure(height)
{
	this->radie = radie;
}
Cone::~Cone()
{

}
Cone* Cone::clone() const
{
	return new Cone(*this);
}
double Cone::getRadie() const
{
	return this->radie;
}
double Cone::getVol() const
{
	double vol = PI * (radie*radie)*this->getHeight() / 3;
	return vol;
}

void Cone::setRadie(double rad)
{
	this->radie = rad;
}

string Cone::toStringSpec() const
{
	stringstream out;
	out << "The volume of the Cone is " << this->getVol() << endl;
	return out.str();
}