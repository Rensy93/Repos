#pragma once
#include "Disc.h"

class Library
{
private:

	Disc *discs = nullptr;
	int maxPlaces;
	int nrOfCds;

public:

	Library();
	~Library();

	int findDisc(const Disc disc)const;
	Disc choceDisc(string name)const;
	bool addDisc(string name);
	bool removeDisc(string name);
	void expandLibrary(Disc *&discs);
	string showLibrary()const;


};