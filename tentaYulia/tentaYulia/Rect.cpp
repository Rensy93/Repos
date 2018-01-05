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

int Rect::hight() const
{
	return this->hight;
}
int Rect::wight() const
{
	return this->wight;
}

void Rect::hight(int hi)
{
	this->hight = hi;
}
void Rect::wight(int wi)
{
	this->wight = wi;
}

string Rect::toStringSpec() const
{
	stringstream out;
	out << "The wight is " << this->wight << " The hight is " << this->hight << endl;
	return out.str();
}