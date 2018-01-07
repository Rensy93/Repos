#include"Donatin.h"

using namespace std;

Donatin::Donatin(string name, int amount)
{
	this->name = name;
	this->amount = amount;
}
Donatin::~Donatin()
{

}
int Donatin::getAmount() const
{
	return this->amount;
}

void Donatin::setAmount(int am)
{
	this->amount = am;
}

Donatin *Donatin::clone() const
{
	return new Donatin (*this);
}
string Donatin::getName() const
{
	return this->name;
}

void Donatin::setName(string nam)
{
	this->name = nam;
}
string Donatin::toString() const
{
	stringstream out;
	out << "Name: " << this->name << " Donated " << this->amount<< endl;
	return out.str();
}
