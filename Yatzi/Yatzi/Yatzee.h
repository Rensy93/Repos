#pragma once
#include "Dice.h"
#include "Protocol.h"
class Yatzee
{
private:
	int nrOfPlayers;

public:

	
	Yatzee();
	~Yatzee();

	int getNrOfPlayers() const;

	string addPlayer(string name);
	bool addResult(int diceValue);

	string nameOfCurrentPlayer()const;
	string protocolInfoOfCurrentPlayer()const;
	string nfoOfLatestToss()const;

	void nextPlayersTurn()const;
	bool areAllPlayersDone()const;

	void toss(int diceValue);

};