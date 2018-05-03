#include "NewsPaperhandler.h"




void NewsPaperhandler::initiate(int from)
{
	for (int i = from; i < cap; i++)
	{
		this->papers[i] = nullptr;
	}
}
void NewsPaperhandler::freeMemory()
{
	for (int i = 0; i < nrOf; i++)
	{
		delete this->papers[i];
	}
	delete[] this->papers;
}
void NewsPaperhandler::deepCopy(const NewsPaperhandler &original)
{
	this->cap = original.cap;
	this->nrOf = original.nrOf;
	this->papers = new NewsPaper*[cap];
	for (int i = 0; i < original.nrOf; i++)
	{
		this->papers[i] = original.papers[i]->clone();
	}
	this->initiate(nrOf);
}
void NewsPaperhandler::expand()
{
	this->cap += 10;
	NewsPaper* *temp = new NewsPaper*[cap];
	for (int i = 0; i < cap; i++)
	{
		temp[i] = this->papers[i];
	}
	delete[] this->papers;
	this->papers = temp;
	temp = nullptr;
}
NewsPaperhandler::NewsPaperhandler(int nrOf)
{
	this->cap = nrOf;
	this->nrOf = 0;
	this->papers = new NewsPaper*[cap];
	this->initiate();
}
NewsPaperhandler::~NewsPaperhandler()
{
	this->freeMemory();
}

NewsPaperhandler::NewsPaperhandler(const NewsPaperhandler &original)
{
	this->deepCopy(original);
}
NewsPaperhandler& NewsPaperhandler::operator=(const NewsPaperhandler &original)
{
	if (this != &original)
	{
		this->freeMemory();
		this->deepCopy(original);
	}
	return *this;
}

bool NewsPaperhandler::addNewsPaper(string name, int pressing)
{
	bool exists = false;
	NewsPaper* temp = new NewsPaper(name, pressing);
	for (int i = 0; i < nrOf && !exists; i++)
	{
	 	if (this->papers[i] == temp)
		{
			exists = true;
		}
	}
	if(!exists)
	{
		if (cap == nrOf)
		{
			this->expand();
			
		}
		this->papers[nrOf++] = new NewsPaper(name, pressing);
		exists = true;
	}
	delete temp;
	return exists;
}
bool NewsPaperhandler::removeNewsPaper(string name)
{
	bool isRemoved = false;
	for (int i = 0; i < nrOf-1; i++)
	{
		if (this->papers[i]->getName() == name)
		{
			delete this->papers[i];
			this->papers[i] = papers[--nrOf];
		
			isRemoved = true;
		}
		
	}
	return isRemoved;
}
int NewsPaperhandler::getNrOfNewsPapers() const
{
	return this->nrOf;
}
void NewsPaperhandler::getAll(string strArr[]) const
{
	for (int i = 0; i < this->nrOf; i++)
	{
		strArr[i] = this->papers[i]->toString();
	}
}
