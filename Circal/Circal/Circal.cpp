#include "Circal.h"
#include <cmath>

Circal::Circal()
{
	this->radius = 0;
	this->x = 0;
	this->y = 0;
}

Circal::Circal(int raidus)
{

	this->radius = raidus;
	this->x = 0;
	this->y = 0;

}
Circal::Circal(int raidusm, int x, int y)
{

	this->radius = radius;
	this->x = x;
	this->y = y;

}
Circal::~Circal(){}

bool Circal::operator==(const Circal &otherCircle) const
{
	/*bool isEqual = false;

	if (this->radius == otherCircle.radius
		&& this->x == otherCircle.x
		&& this->y == otherCircle.y)
	{

		isEqual = true;

	}
	
	return isEqual;*/
	
	return this->radius == otherCircle.radius && this->x == otherCircle.x && this->y == otherCircle.y;

}

bool Circal::operator!=(const Circal &otherCircle) const
{

	return this->radius != otherCircle.radius
		|| this->x != otherCircle.x 
		|| this->y != otherCircle.y;

}

string Circal::toString()const
{

	return "Cirklen har radien " + to_string(this->radius) + "mm och ceurampunkt är (" + to_string(this->x) 
		+ ", " + to_string(this->y) + ") " + "arean är " + to_string(this->area())
		+ "a.e. och omkretsen är " + to_string(this->circrumference()) + "l.e.";
		
}

int Circal::getRadius() const
{

	return this->radius;
}
int Circal::getX() const
{

	return this->x;

}
int Circal::getY() const
{

	return this->y;

}


void Circal::setRadius(int radius)
{
	if (radius >= 0)
	{

		this->radius = radius;

	}
}

double Circal::area()const
{

	return pow(radius, 2)*pi;

}
double Circal::circrumference()const
{

	return 2 * radius*pi;

}

void Circal::move(int x, int y)
{

	this->x = x;
	this->y = y;

}
