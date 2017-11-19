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
	Protocol();
	Protocol(string playerName);
	~Protocol();

	string getPlayerName() const;
	int getSum() const;

	bool isFilled() const;
	bool addResult(int diceValue, int result);

	string toString()const;

};