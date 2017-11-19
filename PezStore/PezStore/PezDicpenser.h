#pragma once
#include <string>

using namespace std;

class PezDispencer 
{

private:
	
	string name;
	int DispencerSize;
	int ntOfpez;

public:

	PezDispencer();
	PezDispencer(string name, int DispencerSize);
	~PezDispencer();

	string getName()const;
	int getSize()const;
	void addPezDicpencer(int amunt);
	int freeSpace()const;
	int pezLeft()const;
	bool DicpendPez();
	string toString()const;


};