#include "Library.h"

Library::Library()
{
	this->maxPlaces = 5;
	this->nrOfCds = 0;
	this->discs = new Disc[maxPlaces];
}

Library::~Library()
{
	delete[] this->discs;
}
	
int Library::findDisc(const Disc disc)const
{
	int discPos = -1;

	for (int i = 0; i < this->nrOfCds; i++)
	{
		if (discs[i] == disc)
		{
			discPos = i;
		}
	}

	return discPos;
}

Disc Library::choceDisc(string name)const
{
	Disc tempDisc(name);
	int discPos = -1;
	discPos=findDisc(tempDisc);
	if (discPos != -1)
	{
		tempDisc = discs[discPos];

	}

	return tempDisc;
}

bool Library::addDisc(string name)
{
	bool complited = false;
	int discPos = -1;
	Disc tempDisc(name);
	if (nrOfCds >= maxPlaces)
	{
		expandLibrary(discs);
	}
	discPos = findDisc(tempDisc);
	if (discPos == -1)
	{
		discs[nrOfCds++] = tempDisc;
		complited = true;
	}

	return complited;
}

bool Library::removeDisc(string name)
{
	bool complited = false;
	int discPos = -1;
	Disc tempDisc(name);
	discPos = findDisc(tempDisc);

	if (discPos != -1)
	{
		discs[discPos] = discs[--nrOfCds];
		complited = true;
	}
	return complited;
}

void Library::expandLibrary(Disc *&discs)
{
	maxPlaces *= 2;
	Disc *temp = new Disc[maxPlaces];

	for (int i = 0; i < nrOfCds; i++)
	{
		temp[i] = discs[i];
	}

	delete[] discs;
	discs = temp;
	temp = nullptr;
}

string Library::showLibrary()const
{
	string statement = "";
	for (int i = 0; i < nrOfCds; i++)
	{
		statement += to_string(i+1)+discs[i].getName()+"\n";
	}

}
