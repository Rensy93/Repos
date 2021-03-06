#pragma once
#include<string>
#include<sstream>
using namespace std;

template <typename T>
Donation::Donation(string name, int summan);



template <typename T>
class Donation
{

private:
	string name;
	int summan;

public:
	Donation(string name = "", int summan = 0);
	virtual~Donation();

	string getName() const;
	int getSum() const;

	void setName();
	void setSum();

	string toString() const;



};



template <typename T>
Donation<T>::Donation(string name, int summan)
{
	this->name = name;
	this->summan = summan;
}

template <typename T>
string Donation::getName()
{
	return this->name;
}

template <typename T>
Donation<T>::~Donation()
{}
template <typename T>
string Donation<T>::getName() const
{
	return this->name;
}

template <typename T>
int Donation::getSum() const
{
	return this->summan;
}
template <typename T>
void Donation::setName(){}
template <typename T>
void Donation::setSum(){}
template <typename T>
string toString() const{}