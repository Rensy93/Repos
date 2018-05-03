#include"Geom.h"
#
using namespace std;

Geom::Geom(int hight)
{
	this->hight = hight;
}
Geom::~Geom()
{

}

int Geom::getHight() const 
{
	return this->hight;
}

void Geom::setHight(int h)
{
	this->hight = h;
}

string Geom::toString() const
{
	stringstream out;
	out << "The hight is " << this->hight << "\n" << toStringSpec() << endl;
	return out.str();
}