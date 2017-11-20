#pragma once
#include <string>

using namespace std;

class Bike
{
private:

	string color;
	string maker;
	int nrOfGears;

public:

	Bike();
	Bike(string color, string maker, int nrOfGrears);
	~Bike();
	
	bool operator==(const Bike &otherBike)const;
	bool operator!=(const Bike &otherBike)const;

	string getColor()const;
	string getMaker()const;
	int getNrOfGears()const;

	//betty special
	string toString()const;




};