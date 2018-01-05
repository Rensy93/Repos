#pragma once
#include<string>
#include<sstream>
using namespace std;
/*
template <typename T>
Donation::Donation(string name, int summan);

template <typename T>
string Donation::getName();
template <typename T>
Donation::~Donation();
template <typename T>
string Donation::getName() const;
template <typename T>
int Donation::getSum() const;
template <typename T>
void Donation::setName();
template <typename T>
void Donation::setSum();
template <typename T>
string toString() const;

*/
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

	void setName(T namme);
	void setSum(T summ);

	string toString() const;



};



template <typename T>
Donation<T>::Donation(string name, int summan)
{
	this->name = name;
	this->summan = summan;
}

template <typename T>
T Donation<T>::getName()
{
	return this->name;
}

template <typename T>
Donation::~Donation()
{}
template <typename T>
string Donation<T>::getName() const
{
	return this->name;
}

template <typename T>
T Donation<T>::getSum() const
{
	return this->
}
template <typename T>
void Donation<T>::setName(T namme)
{
	this->name = namme;
}
template <typename T>
void Donation<T>::setSum(T summ)
{
	this->summan = summ;
}
template <typename T>
string Donation<T> toString() const
{
	stringsteream out;
	out << "Name: " << this->name << "\nSumman " < this->summan << endl;
	return out.str();
}

