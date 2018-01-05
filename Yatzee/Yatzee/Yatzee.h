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

	//Member funktions
	void initiate(int from = 0);
	void freeMemory();
	void expand();
	void makeCopy(const Yatzee &originalObjekt);

public:

	//kunstruktor & dekonstruktor
	Yatzee(int players = 5);
	~Yatzee();

	//copykunstruktor and assign operator
	Yatzee(const Yatzee &originalobjekt);
	Yatzee& operator=(const Yatzee &originalObjekt);
	
	//Player funktions
	int findPlayer(const string name)const;
	int getNrOfPlayers() const;
	void nextPlayersTurn();

	//Add funktions
	void addPlayer(const string name);
	bool addResult(int diceValue);

	//Current player funktions
	string nameOfCurrentPlayer()const;
	string protocolInfoOfCurrentPlayer()const;
	bool areAllPlayersDone()const;

	//Dice releted funktions
	void toss();
	void toss(int diceValue);
	string infoOfLatestToss()const;


};
