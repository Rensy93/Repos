
#include "Dice.h"
#include <cstdlib>

//construktor and destruktor
Dice::Dice(int nrFaces)
{
	this->nrFaces = nrFaces;
	this->currentValue = rand() % this->nrFaces + 1;
}
Dice::~Dice() {}

//Dice and dice value funktions
void Dice::toss()
{
	this->currentValue = rand() % this->nrFaces + 1;
}
int Dice::getCurrentValue() const
{
	return this->currentValue;
}