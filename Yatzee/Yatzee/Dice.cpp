
#include "Dice.h"
#include <cstdlib>

Dice::Dice(int nrFaces)
{
	this->nrFaces = nrFaces;
	this->currentValue = rand() % this->nrFaces + 1;
}

Dice::~Dice() {}

void Dice::toss()
{
	this->currentValue = rand() % this->nrFaces + 1;
}

int Dice::getCurrentValue() const
{
	return this->currentValue;
}