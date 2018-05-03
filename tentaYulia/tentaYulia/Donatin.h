#pragma once
#include<string>
#include<sstream>
using namespace std;

class Donatin
{
private:
	string name;
	int amount;

public:
	Donatin(string name = "", int amount=0);
	virtual~Donatin();

	string getName() const;
	int getAmount() const;

	void setAmount(int am);
	int getAllDonations() const;

	void setName(string nam);
	string toString() const;

	Donatin *clone() const;


};