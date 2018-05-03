#include"Box.h"



Box::Box(double wight, double height, double lenght)
	:Figure(height)
{
	this->wight = wight;
	this->lenght = lenght;
}
Box::~Box()
{

}

Box* Box::clone() const
{
	return new Box(*this);
}
double Box::getLenght() const
{
	return this->lenght;
}
double Box::getWight() const
{
	return this->wight;
}
double Box::getVol() const
{
	double vol;
	vol = lenght * wight*this->getHeight();
	return vol;
}

string Box::toStringSpec() const
{
	stringstream out;
	out << "The volume of the box is " << this->getVol() << endl;
	return out.str();
}
