#include "Yatzee.h"
#include <sstream>
#include "Dice.h"

//Member funktions
void Yatzee::initiate(int from)
{
	for (int i = from; i < this->maxNrOfPlayers-1; i++)
		this->protocls[i] = nullptr;
}
void Yatzee::freeMemory()
{
	for (int i = 0; i < this->nrOfPlayers; i++)
	{
		if (this->protocls[i] != nullptr)
		{
			delete this->protocls[i];
			this->protocls[i] = nullptr;

		}
	}
	delete[] this->protocls;
}
void Yatzee::expand()
{
	this->maxNrOfPlayers += 10;
	Protocol* *temp = new Protocol*[this->maxNrOfPlayers];

	for (int i = 0; i < this->nrOfPlayers; i++)
		temp[i] = this->protocls[i];

	delete[] this->protocls;
	this->protocls = temp;
	temp = nullptr;
	this->initiate(this->nrOfPlayers);
}
void Yatzee::makeCopy(const Yatzee &originalObjekt)
{
	this->maxNrOfPlayers = originalObjekt.maxNrOfPlayers;
	this->nrOfPlayers = originalObjekt.nrOfPlayers;
	this->currentPlayer = originalObjekt.currentPlayer;

	this->protocls = new Protocol*[originalObjekt.maxNrOfPlayers];


	for (int i = 0; i < originalObjekt.nrOfPlayers; i++)
		this->protocls[i] = new Protocol(*originalObjekt.protocls[i]);

	this->initiate(this->nrOfPlayers);
}

//kunstruktor & dekonstruktor
Yatzee::Yatzee(int players)
{
	this->maxNrOfPlayers = players; 
	this->protocls = new Protocol*[this->maxNrOfPlayers];
	this->currentPlayer = 0;
	this->nrOfPlayers = 0;
	this->initiate(0);
}
Yatzee::~Yatzee() 
{
	this->freeMemory();
	this->nrOfPlayers = 0;
}

//copykunstruktor and assign operator
Yatzee::Yatzee(const Yatzee &originalobjekt)
{
	makeCopy(originalobjekt);
}
Yatzee& Yatzee::operator=(const Yatzee &originalObjekt)
{
	if (this != &originalObjekt)
	{
		this->freeMemory();
		this->makeCopy(originalObjekt);
	}

	return *this;
}

//Player funktions
int Yatzee::findPlayer(const string name)const
{
	int pos = -1;

	for (int i = 0; i < this->nrOfPlayers; i++)
	{

		if (this->protocls[i]->getPlayerName() == name)
		{
			pos = i;
		}

	}

	return pos;
}
void Yatzee::nextPlayersTurn()
{
	if (this->currentPlayer < this->nrOfPlayers-1)
	{
		this->currentPlayer++;
	}
	else
	{
		this->currentPlayer = 0;
	}
}
int Yatzee::getNrOfPlayers() const
{
	return this->nrOfPlayers;
}

//Add funktions
void Yatzee::addPlayer(const string name)
{
	if (this->nrOfPlayers >= this->maxNrOfPlayers)
	{
		this->expand();
	}
	//if (findPlayer(name) == -1)
	//{
		protocls[nrOfPlayers] = new Protocol(name);
		nrOfPlayers++;
	//}
}
bool Yatzee::addResult(int diceValue)
{
	bool wasAdded = false;
	int results = 0;

	for (int i = 0; i < 5; i++)
	{
		if(diceValue==dices[i].getCurrentValue())
			results += dices[i].getCurrentValue();
	
	}

	if (this->protocls[currentPlayer]->addResult(diceValue,results))
		wasAdded = true;

	return wasAdded;
}

//Current player funktions
string Yatzee::nameOfCurrentPlayer()const
{
	
	return this->protocls[currentPlayer]->getPlayerName();
}
string Yatzee::protocolInfoOfCurrentPlayer()const
{
	return this->protocls[currentPlayer]->toString();
}
bool Yatzee::areAllPlayersDone()const
{
	bool isDone = true;

	for (int i = 0; i<this->nrOfPlayers; i++)
	{

		if (!protocls[i]->isFilled())
		{
			isDone = false;
		}

	}

	return isDone;
}

//Dice releted funktions
void Yatzee::toss()
{
	for (int i = 0; i < nrOfDices; i++)
	{
		dices[i].toss();
	}
}
void Yatzee::toss(int diceValue)
{

	for (int i = 0; i < nrOfDices; i++)
	{
		if (dices[i].getCurrentValue()!=diceValue)
		{
			dices[i].toss();
		}

	}

}
string Yatzee::infoOfLatestToss()const
{
	stringstream  out;

	for (int i = 0; i < nrOfDices; i++)
		out << "Dice " << i + 1 << " : " << dices[i].getCurrentValue() << ", ";

	return out.str();
}








