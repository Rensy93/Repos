#include"Parral.h"

using namespace std;


Parral::Parral(int hight, int lenght, int wight)
	:Geom(hight)
{
	this->lenght = lenght;
	this->wight = wight;
}
Parral::~Parral()
{

}

Parral* Parral::clone() const
{
	return new Parral(*this);
}
int Parral::getWight() const
{
	return this->wight;
}
int Parral::getLenght() const
{
	return this->lenght;
}

void Parral::setWight(int wi)
{
	this->wight = wi;
}
void Parral::setLenght(int le)
{
	this->lenght = le;
}

double Parral::getVol() const
{
	double vol = this->lenght*this->wight*this->getHight();
	return vol;
}

string Parral::toStringSpec() const
{
	stringstream out;
	out << "The volume av the box is " << this->getVol() << "\n";
	return out.str();
}