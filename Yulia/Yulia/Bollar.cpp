//
// Created by Yulia Lizneva on 2017-10-06.
//

#include "Bollar.h"
#include <cmath>

Bollar::Bollar(double speedX)
{
	this->speedX = speedX;

}

Bollar::Bollar()
{
	this->speedX = 0;

}

int Bollar::getSpeedX() const
{
	return this->speedX;
}

double Bollar::getSpeedY(int travelTime) const
{
	return travelTime*aceleration;

}

double Bollar::getResultant(int travelTime) const
{
	return sqrt((speedX*speedX) + (getSpeedY(travelTime)*getSpeedY(travelTime)));

}

void Bollar::setSpeedX(int speedX)
{
	this->speedX = speedX;
}

bool Bollar::operator==(const Bollar &otherBall) const
{
	bool isEqual = false;
	if (this->speedX == otherBall.speedX)
	{
		isEqual = true;
	}
	return isEqual;
}

bool Bollar::operator>(const Bollar &otherball) const
{
	bool isBigger = false;
	if (this->speedX > otherball.speedX)
	{
		isBigger = true;
	}
	return isBigger;
}

string Bollar::toString(int travelTime) const
{
	string byAsStringX = to_string(this->speedX);
	string byAsStringY = to_string(this->getSpeedY(travelTime));
	string byAsStringTot = to_string(this->getResultant(travelTime));

	string totalString = byAsStringX + " is the horisonel speed, " +
		byAsStringY + " is the vertical speed, and " + byAsStringTot
		+ " is the total speed of the ball";
	return totalString;

}