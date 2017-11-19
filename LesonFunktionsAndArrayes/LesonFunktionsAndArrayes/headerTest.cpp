#include "HeaderTest.h"
#include <iostream>


void printString(string what, int nrOfTimes)
{
	for (int i = 0; i < nrOfTimes; i++)
		cout << what << " ";

	cout << endl << endl;
}

void printAgin(string first, string last, int nrTimes)
{
	for (int i = 0; i < nrTimes; i++)
		cout << first << " " << last << endl;

	cout << endl << endl;
}