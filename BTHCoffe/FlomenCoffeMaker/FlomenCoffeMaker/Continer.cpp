#include "Continer.h"

//memberFunktions
bool Continer::isEmty()
{
	bool isEmty = false;
	if (this->leftCount <= 0)
	{
		isEmty = true;
	}
	return isEmty;
}
void Continer::refill()
{
	this->leftCount = MAX_CAP;
}

//Funktions
Continer::Continer()
{
	this->leftCount = 0;
}
Continer::~Continer(){}
void Continer::changCounter()
{
	if (!isEmty())
		this->leftCount--;
	else
		refill();

}