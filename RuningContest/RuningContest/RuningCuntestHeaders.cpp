#include "RuningCuntestHeaders.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int timeCalculater(int Minutes, int secunds)
{

	return Minutes * 60 + secunds;

}

void readFromFile(string fileName, string names[], int birthYears[], int capacity, int &capFile)
{
	

	fstream in;
	in.open("fileName");
	in >> capFile;

	for (int i = 0; i < capFile && i < capacity; i++)
	{

		in >> names[i];
		in >> birthYears[i];

	}

}

void printTheArray(string names, int ages, int capacity, int capFile)
{

	for (int i = 0; i < capFile && i < capacity; i++)
	{

		cout <<"Participent "<< names[i];
		cout << ages[i];

	}


}