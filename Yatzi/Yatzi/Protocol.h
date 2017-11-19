#pragma once
#include <string>

using namespace std;
      
class Protocol
{

private:

	string playerName;
	int results[6] = {};
	int totalSum;

public:
	Protocol();
	Protocol(string playerName);
	~Protocol();

	string getPlayerName() const;
	int gatSum() const;

	bool isFilled() const;
	bool addResult(int diceValue, int result);

	string toString()const;

};