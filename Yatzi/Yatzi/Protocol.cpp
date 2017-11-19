#include "Protocol.h"


Protocol::Protocol()
{

	this->playerName = "";
	this->totalSum = 0;

}
Protocol::Protocol(string playerName)
{
	this->playerName = playerName;
	this->totalSum = 0;
}
Protocol::~Protocol(){}

string Protocol::getPlayerName() const
{
	return this->playerName;
}
int Protocol::gatSum() const
{
	return this->totalSum;
}

bool Protocol::isFilled() const
{
	bool isfille = true;

	for (int i = 0; i < 6; i++)
	{
		if (results <= 0)
		{
			isfille = false;
		}
	}

	return isfille;
}
bool Protocol::addResult(int diceValue, int result)
{
	bool wasAdded = false;
	if (results[diceValue - 1] <= 0)
	{
		this->results[diceValue - 1] = result;
		this->totalSum += result;
		wasAdded = true;
	}

	
	return wasAdded;
}

string Protocol::toString()const
{
	string statment = +"Name: "+this->playerName+"\n";

	for (int i = 0; i < 5; i++)
	{
		statment += to_string(i + 1) + " | " + to_string(results[i]) + "\n";
	}

	statment += "Sum | " + to_string(this->totalSum) + "\n";

	return statment;
}