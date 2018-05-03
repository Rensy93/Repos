#pragma once
#include "NewsPaper.h"

class NewsPaperhandler
{
private:
	NewsPaper* *papers;
	int cap;
	int nrOf;

	void initiate(int from = 0);
	void freeMemory();
	void deepCopy(const NewsPaperhandler &original);
	void expand();

public:
	NewsPaperhandler(int nrOf);
	virtual~NewsPaperhandler();

	NewsPaperhandler(const NewsPaperhandler &original);
	NewsPaperhandler& operator=(const NewsPaperhandler &original);

	bool addNewsPaper(string name, int pressing);
	bool removeNewsPaper(string name);
	int getNrOfNewsPapers() const;
	void getAll(string strArr[]) const;



};