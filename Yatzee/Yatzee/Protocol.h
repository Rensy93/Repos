#pragma once
#include <string>

using namespace std;
const int CAP = 6;

class Protocol
{

private:

	string playerName;
	int results[CAP];
	int totalSum;

public:
	//construktors and destruktor
	Protocol();
	Protocol(string playerName);
	~Protocol();

	//get Funktions
	string getPlayerName() const;
	int getSum() const;

	//result and protocol stuff
	bool isFilled() const;
	bool addResult(int diceValue, int result);

	//Betty special
	string toString()const;
};