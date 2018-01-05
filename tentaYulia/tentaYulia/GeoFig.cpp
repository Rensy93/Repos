#include"GeoGig.h"

using namespace std;

GeoFig::GeoFig(int x, int y)
{
	this->x = x;
	this->y = y;
}
GeoFig::~GeoFig()
{

}

int GeoFig::getX() const
{
	return this->x;
}
int GeoFig::getY() const
{
	return this->y;
}

void GeoFig::setX(int xCoord)
{
	this->x = xCoord;
}
void GeoFig::setY(int yCoord)
{
	this->y = yCoord;
}


string GeoFig::toString() const
{
	stringstream out;
	out << toStringSpec()<< "x-coord is " << this->x << " y-coord is " << this->y << endl;
	return out.str();
}
