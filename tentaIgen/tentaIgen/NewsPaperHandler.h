#pragma once
#include "newsPaper.h"

class NewsPaperHandler
{
private:
	NewsPaperHandler* *newsPapers;
	int maxNr;
	int nrOf;

	void initiate();
	void freeMemory();
	void deepCopy(const NewsPaperHandler &original);
	void expand();

public:

	NewsPaperHandler(int maxNr = 0);
	virtual ~NewsPaperHandler();

	NewsPaperHandler(const NewsPaperHandler &ob);
	NewsPaperHandler& operator=(const NewsPaperHandler &ob);
	int findNewsPaper(const NewsPaper &newsPaper);

	bool addNewsPaper(string namn, int presing);
	bool removeNewsPaper(string namn);
	int getNrOfNewsPaper() const;
	void getAll(string arr[]) const;


};