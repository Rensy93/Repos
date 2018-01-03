#include "Drinks.h"

Drinks::Drinks(int basePrice)
	:coffeBens(), milk(), sugar(), carbonGas(), cohcletPuder()
	//coffeGrounds()
{

	this->basePrice = basePrice;
	this->price = basePrice;

}
Drinks::~Drinks(){}
int Drinks::getBasePrice()
{
	return this->basePrice;
}
int Drinks::getPrice()
{
	return this->price;
}
void Drinks::changeBasePrice(int newBasePrice)
{
	this->basePrice = newBasePrice;
	this->price = newBasePrice;
}
void Drinks::addToPrice(int regementPrice)
{
	price = basePrice + regementPrice;
}