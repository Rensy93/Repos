#include"Rect.h"
using namespace std;


Rect::Rect(int x, int y, int hight, int wight)
	:GeoFig(x, y)
{
	this->hight = hight;
	this->wight = wight;
}
Rect::~Rect()
{

}

int Rect::getHight() const
{
	return this->hight;
}
int Rect::getWight() const
{
	return this->wight;
}

void Rect::setHight(int hi)
{
	this->hight = hi;
}
void Rect::setWight(int wi)
{
	this->wight = wi;
}

string Rect::toStringSpec() const
{
	stringstream out;
	out << "The wight is " << this->wight << " The hight is " << this->hight <<"After random move "<< toStringMot()<< endl;
	return out.str();
}