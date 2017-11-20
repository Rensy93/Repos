#pragma once
#include "Bike.h"

class BikeHandler
{

private:
	Bike* *bikes;
	int nrOfBikes;
	int capasity;

public:
	BikeHandler(int caspasity = 10);
	~BikeHandler();
	BikeHandler(const BikeHandler &other);
	//BikeHandler& operator=(const BikeHandler &other);

	bool addBike(string color, string maker, int nrOfGears);
	void getAllBikesAssString(string bikeList[], int capOfBickeList)const;
	int getNrOfBikes()const;



};
