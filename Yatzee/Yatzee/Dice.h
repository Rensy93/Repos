#pragma once

class Dice
{
private:

	int currentValue;
	int nrFaces;
public:
	//construktor and destruktor
	Dice(int nrFaces = 6);
	~Dice();

	//Dice and dice value funktions
	void toss();
	int getCurrentValue() const;
};