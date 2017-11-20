#include "Protocol.h"

//construktors and destruktor
Protocol::Protocol()
{

	this->playerName = "";
	this->totalSum = 0;
	for (int i = 0; i < CAP; i++)
		this->results[i] = -1;

}
Protocol::Protocol(string playerName)
{
	this->playerName = playerName;
	this->totalSum = 0;
	for (int i = 0; i < CAP; i++)
		this->results[i] = -1;
}
Protocol::~Protocol() {}

//get Funktions
string Protocol::getPlayerName() const
{
	return this->playerName;
}
int Protocol::getSum() const
{
	return this->totalSum;
}

//result and protocol stuff
bool Protocol::isFilled() const
{
	bool isfille = true;

	for (int i = 0; i < CAP; i++)
	{
		if (results[i] < 0)
		{
			isfille = false;
		}
	}

	return isfille;
}
bool Protocol::addResult(int diceValue, int result)
{
	bool wasAdded = false;


	if (this->results[diceValue - 1] < 0)
	{
		this->results[diceValue - 1] = result;
		this->totalSum += result;
		wasAdded = true;
	}


	return wasAdded;
}

//Betty special
string Protocol::toString()const
{
	string statment = +"Name: " + this->playerName + "\n";

	for (int i = 0; i < CAP; i++)
	{
		if (results[i] >= 0)
		{
			statment += to_string(i + 1) + " | " + to_string(results[i]) + "\n";
		}
		else
		{
			statment += to_string(i + 1) + " | " + to_string(0) + "\n";
		}
}

	statment += "Sum | " + to_string(this->totalSum) + "\n";

	return statment;
}