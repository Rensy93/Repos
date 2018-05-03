#include"Cone.h"

const double PI = 3.1415;
Cone::Cone(double height, double radie)
	:Shape(height)
{
	this->radie = radie;
}
Cone::~Cone()
{

}

double Cone::getRadie() const
{
	return this->radie;
}
void Cone::setRadie(double r)
{
	this->radie = r;
}
double Cone::getVolym() const
{
	return PI*(radie*getHeight() / 3);
}
Cone* Cone::clone() const
{
	return new Cone(*this);
}
string Cone::toStringSpec() const
{
	stringstream out;
	out << "Radien is " << this->radie<<" The volume is "<<this->getVolym();
	return out.str();
}