#include"Charity.h"

using namespace std;


void Charity::initiate(int from)
{
	for (int i = 0; i < cap; i++)
	{
		this->donations[i] = nullptr;
	}
}
void Charity::freeMemory()
{
	for (int i = 0; i < nrof; i++)
	{
		delete this->donations[i];
	}
	delete[] donations;
}
void Charity::deepCopy(const Charity &original)
{
	this->cap = original.cap;
	this->nrof = original.nrof;
	this->donations = new Donatin*[cap];
	for (int i = 0; i < original.nrof; i++)
	{
		this->donations[i] = original.donations[i]->clone();
	}
	this->initiate(nrof);
}
void Charity::expand()
{
	this->cap += 10;
	Donatin** temp = new Donatin*[cap];
	for (int i = 0; i < cap; i++)
	{
		temp[i] = this->donations[i];
	}
	delete[] this->donations;
	this->donations = temp;
}

Charity::Charity()
{
	this->cap = 10;
	this->nrof = 0;
	donations = new Donatin*[cap];
	this->initiate();
}
Charity::Charity(int cap, int nrOf)
{
	this->cap = cap;
	this->nrof = nrof;
	donations = new Donatin*[this->cap];
	this->initiate();
}
Charity::~Charity()
{
	this->freeMemory();
}

Charity::Charity(const Charity &original)
{
	this->deepCopy(original);
}
Charity& Charity::operator=(const Charity &original)
{
	if (this != &original)
	{
		this->freeMemory();
		this->deepCopy(original);
	
	}
	return *this;
}

void Charity::addDonation(string name, int amount)
{
	if (nrof == cap)
	{
		this->expand();
	}

	donations[nrof++] = new Donatin(name, amount);
}
void Charity::showAll(string str[], int antal)
{
	for (int i = 0; i < nrof; i++)
	{
		str[i] = this->donations[i]->toString();
	}
}

int Charity::getQuantity() const
{
	return this->nrof;
}
bool Charity::deleteSome(string name)
{
	bool isOk = false;
	for (int i = 0; i < nrof; i++)
	{
		if (this->donations[i]->getName() == name)
		{
			delete this->donations[i];
			this->donations[i] = this->donations[--nrof];
			i--;
			isOk = true;
		}

	}
	return isOk;
}
int Charity::showAllDonation() const
{
	int sum = 0;
	for (int i = 0; i < nrof; i++)
	{
		sum += donations[i]->getAmount();
	}
	return sum;

}
