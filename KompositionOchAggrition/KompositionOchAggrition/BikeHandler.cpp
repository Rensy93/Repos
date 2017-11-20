#include "BikeHandler.h"

BikeHandler::BikeHandler(int caspasity)
{
	this->nrOfBikes=0;
	this->capasity = caspasity;
	this->bikes = new Bike*[this->capasity];
}
BikeHandler::~BikeHandler()
{
	for (int i = 0; i < nrOfBikes; i++)
	{
		delete bikes[i];
		bikes[i] = nullptr;
	}

	delete[] bikes;
}
BikeHandler::BikeHandler(const BikeHandler &other)
{

	this->capasity = other.capasity;
	this->nrOfBikes = other.nrOfBikes;
	this->bikes = new Bike*[this->capasity];

	for (int i = 0; i < this->nrOfBikes; i++)
	{
		this->bikes[i] = new Bike(*other.bikes[i]);
	}

}
//BikeHandler& operator=(const BikeHandler &other);

bool BikeHandler::addBike(string color, string maker, int nrOfGears)
{
	bool fund = false;
	Bike *temp = new Bike(color, maker, nrOfGears);
	for (int i = 0; i < this->nrOfBikes && !fund; i++)
	{
		//if (temp->toString() != this->bikes[i]->toString())
		if (*temp == *this->bikes[i])
		{
			fund = true;
		}
	}
	if (!fund)
	{
		if (this->nrOfBikes >= this->capasity)
		{
			//this->expand();
		}

		this->bikes[this->nrOfBikes++] = temp;
	}
	else
	{
		delete temp;
	}
	

	return fund;
}
void BikeHandler::getAllBikesAssString(string bikeList[], int capOfBickeList)const
{
	for (int i = 0; i < nrOfBikes && i<=capasity; i++)
	{
		bikeList[i] = this->bikes[i]->toString();
	}

}
int BikeHandler::getNrOfBikes()const
{
	return this->nrOfBikes;
}