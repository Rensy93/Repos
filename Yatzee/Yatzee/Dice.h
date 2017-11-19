#pragma once

class Dice
{
private:

	int currentValue;
	int nrFaces;
public:

	Dice(int nrFaces = 6);
	~Dice();
	void toss();
	int getCurrentValue() const;

};