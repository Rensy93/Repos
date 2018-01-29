#pragma once
#include<string>

using namespace std;

//template <typename T>
//Donation::Donation(string name, int summan);
//
//template <typename T>
//string Donation::getName();
//template <typename T>
//Donation::~Donation();
//template <typename T>
//string Donation::getName() const;
//template <typename T>
//int Donation::getSum() const;
//template <typename T>
//void Donation::setName();
//template <typename T>
//void Donation::setSum();
//template <typename T>
//string toString() const;


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

	void setName(const string name);
	void setSum(const int sum);

	string toString() const;



};



template <typename T>
Donation<T>::Donation(string name, int summan)
{
	this->name = name;
	this->summan = summan;
}

template <typename T>
string Donation<T>::getName()
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
int Donation<T>::getSum() const
{
	return this->summan;
}
template <typename T>
void Donation<T>::setName(const string name)
{
	this->name = name;
}
template <typename T>
void Donation<T>::setSum(const int sum)
{
	this->summan = sum;
}
template <typename T>
string toString() const
{
	string statement = "name: "+this->name+"\nSumman: "+to_string(this->summan)+"\n";
	return statement;
}