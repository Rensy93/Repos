//includes
#include "OxieRaceHeader.h"
#include <iostream>
//#include <fstream>
//#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;



int main()
{

	srand(time(0));

	string *names = nullptr;
	int *yearOfBirth = nullptr;
	int *results = nullptr;
	int competisionYear = 0, nrsOfKids = -1, cap = -1, winnerPos = -1;
	int findAge = 0;
	string fill = "Deltagarlista.txt";

	string *nameTemp = nullptr;
	int *yearOfBirthTemp = nullptr;

	cout << "competetors year: ";
	cin >> competisionYear; cin.ignore();
	cout << "how meny competetors are in the competision: ";
	cin >> cap; cin.ignore();
	
	//Memory alocation
	names = new string[cap];
	yearOfBirth = new int[cap];
	results = new int[cap];


	readFromFile(fill, names, yearOfBirth, cap, nrsOfKids);
	showAll(names, yearOfBirth, nrsOfKids);

	// utökaarray
	cap += 10;
	nameTemp = new string[cap];
	yearOfBirthTemp = new int[cap];
	
	for (int i = 0; i < nrsOfKids; i++)
	{
		nameTemp[i] = names[i];
		yearOfBirthTemp[i] = yearOfBirth[i];

	}
	delete[] names;
	names = nameTemp;

	delete[] yearOfBirth;
	yearOfBirth = yearOfBirthTemp;

	//add and remove kids
	addNewKid(names, yearOfBirth, nrsOfKids);

	removKid(names, yearOfBirth, nrsOfKids);
	cout << endl << endl;
	//compeditor is:
	cout << "this is all the registrated kids: " << endl;
	showAll(names, yearOfBirth, nrsOfKids);

	//competision time
	RandomizeResults(results, nrsOfKids);

	//Result Test
	/*for (int i = 0; i < nrsOfKids; i++)
	{

		cout << "Name: " << names[i] << " age: "
			<< 2017 - yearOfBirth[i] << " results: " 
			<< results[i] / 60<<"min "<<results[i]%60 << "sec" << endl<<endl;

	}*/
	winnerPos = findWinner(results, nrsOfKids);

	cout << "The winner is: " << names[winnerPos]
		<< " and hens age is " << 2017 - yearOfBirth[winnerPos]
		<< " and winning time is " 
		<< results[winnerPos]/60 << "minute " 
		<< results[winnerPos]%60 << "sec" << endl<<endl;

	//Enter a age
	cout << "enter a age between [8...12]: ";
	cin >> findAge; cin.ignore();
	while (findAge < 8 || findAge > 12)
	{
		cout << "try agin!!\nenter a age between [8...12]: ";
		cin >> findAge; cin.ignore();

	}
	findKidsWhifAge(names, yearOfBirth, nrsOfKids, findAge);
	cout << endl;

	//Sort result
	showAllWithResults(names, yearOfBirth, results, nrsOfKids);
	
	sortResults(names, yearOfBirth, results, nrsOfKids);
	cout << "this is the result of competision" << endl;
	showAllWithResults(names, yearOfBirth, results, nrsOfKids);

	//SaveResult
	fill = "CompetisionResult.txt";
	writToFile(fill, names, yearOfBirth, results, nrsOfKids);

	//average
	average(results, nrsOfKids);

	//memory clening.
	delete[] names;
	delete[] yearOfBirth;
	delete[] results;

	system("pause");
	return 0;
}

