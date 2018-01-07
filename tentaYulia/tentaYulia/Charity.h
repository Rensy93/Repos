#pragma once
#include"Donatin.h"

using namespace std;

class Charity
{

private:
	int cap;
	int nrof;
	Donatin** donations;

	void initiate(int from = 0);
	void freeMemory();
	void deepCopy(const Charity &original);
	void expand();

public:
	Charity();
	Charity(int cap, int nrOf);
	~Charity();

	Charity(const Charity &original);
	Charity& operator=(const Charity &original);

	void addDonation(string name, int amount);
	void showAll(string str[], int antal);

	int getQuantity() const;
	bool deleteSome(string name);
	int showAllDonation() const;




};