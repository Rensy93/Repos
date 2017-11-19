#include "Dice.h"
#include <cstdlib>

Dice::Dice()
{
	currentValue = 0;
}

Dice::~Dice(){}

void Dice::toss()
{
	this->currentValue = rand() % 6 + 1;
}

int Dice::getCurrentValue() const
{
	return this->currentValue;
}