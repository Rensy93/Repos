#include "Yatzee.h"

Yatzee::Yatzee()
{
	this->nrOfPlayers = 0;
}
Yatzee::~Yatzee(){}


int Yatzee::getNrOfPlayers() const
{
	return nrOfPlayers;
}

string Yatzee::addPlayer(string name)
{

}
bool Yatzee::addResult(int diceValue)
{

}

string Yatzee::nameOfCurrentPlayer()const;
string Yatzee::protocolInfoOfCurrentPlayer()const;
string Yatzee::nfoOfLatestToss()const;

void Yatzee::nextPlayersTurn()const;
bool Yatzee::areAllPlayersDone()const;

void Yatzee::toss(int diceValue);