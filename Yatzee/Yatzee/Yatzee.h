#pragma once
#include "Dice.h"
#include "Protocol.h"

const int nrOfDices=5;

class Yatzee
{
private:
	int maxNrOfPlayers;
	int nrOfPlayers;
	int currentPlayer;
	Dice dices[nrOfDices];
	Protocol* *protocls;

	void initiate(int from = 0);
	void freeMemory();
	void expand();
	void makeCopy(const Yatzee &originalObjekt);

public:


	Yatzee(int players = 5);
	~Yatzee();

	Yatzee(const Yatzee &originalobjekt);
	Yatzee& operator=(const Yatzee &originalObjekt);
	
	int findPlayer(const string name);

	int getNrOfPlayers() const;

	void addPlayer(const string name);
	bool addResult(int diceValue);

	string nameOfCurrentPlayer()const;
	string protocolInfoOfCurrentPlayer()const;
	string infoOfLatestToss()const;

	void nextPlayersTurn();
	bool areAllPlayersDone()const;

	void toss(int diceValue);
	void toss();

};
