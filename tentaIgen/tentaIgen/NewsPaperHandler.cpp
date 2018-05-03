#include "NewsPaperHandler.h"

void NewsPaperHandler::initiate()
{
	for (int i = 0; i < this->maxNr; i++)
	{
		newsPapers[i] = nullptr;
	}
}

void NewsPaperHandler::freeMemory()
{
	for(int i )
}

NewsPaperHandler::NewsPaperHandler(int maxNr)
{
	maxNr = maxNr;
	nrOf = 0;
}