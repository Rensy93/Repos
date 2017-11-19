#include "RuningCuntestHeaders.h"
#include <iostream>

using namespace std;

int main()
{
	string *names = nullptr;
	int *ages = nullptr;
	int *resultTimes = nullptr;
	int coumpetisionYear = -1, nrOfChildren, age, capFile;

	cout << "Coumpetision year is this: ";
	cin >> coumpetisionYear; cin.ignore;

	cout << "How meny childes are allowed in this year competision: ";
	cin >> nrOfChildren; cin.ignore;

	names = new string[nrOfChildren];
	ages = new int[nrOfChildren];
	resultTimes = new int[nrOfChildren];


	readFromFile("AfleatsList.txt", names, ages, nrOfChildren, capFile);


	delete[] names;
	delete[] ages;
	delete[] resultTimes;

	system("pause");
	return 0;
}