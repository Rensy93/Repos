#pragma once

class Dice
{
private:

	int currentValue;

public:

	Dice();
	~Dice();
	void toss();
	int getCurrentValue() const;

};