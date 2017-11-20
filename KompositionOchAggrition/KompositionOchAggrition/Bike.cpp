#include "Bike.h"


Bike::Bike()
{
	this->color = "?";
	this->maker = "?";
	this->nrOfGears = 0;
}
Bike::Bike(string color, string maker, int nrOfGrears)
{
	this->color = color;
	this->maker = maker;
	this->nrOfGears = nrOfGears;
}
Bike::~Bike(){}

bool Bike::operator==(const Bike &otherBike)const
{

	return this->color == otherBike.color
		&& this->maker == otherBike.maker
		&& this->nrOfGears == otherBike.nrOfGears;

}
bool Bike::operator!=(const Bike &otherBike)const
{
	return this->color != otherBike.color
		&& this->maker != otherBike.maker
		&& this->nrOfGears != otherBike.nrOfGears;
}

string Bike::getColor()const
{
	return this->color;
}
string Bike::getMaker()const
{
	return this->maker;
}
int Bike::getNrOfGears()const
{
	return this->nrOfGears;
}

//betty special
string Bike::toString()const
{
	string statment = "";

	statment += "Color: " + this->color + "\nMaker: " + this->maker 
		+ "\nNumber of gears: " + to_string(this->nrOfGears) + "\n";

	return statment;
}