#include <iostream>
#include <string>
#include <fstream>
#include "OxieRaceHeader.h"


using namespace std;


//funktions

void readFromFile(string fillName, string nameArray[], int yearArray[], int theCap, int &nrOfKids)
{

	fstream in;

	in.open(fillName);
	in >> nrOfKids; in.ignore();

	for (int i = 0; i < theCap && i < nrOfKids; i++)
	{

		getline(in, nameArray[i]);
		in >> yearArray[i]; in.ignore();

	}

	in.close();

}

void showAll(string nameArray[], int yearArray[], int nrKids)
{

	for (int i = 0; i < nrKids; i++)
		//for (int i = 0; i < cap; i++)
	{

		cout << "name: " << nameArray[i] << " Age: " << 2017 - yearArray[i] << endl;


	}


}

void showAllWithResults(string nameArray[], int yearArray[], int resultArray[], int nrKids)
{

	for (int i = 0; i < nrKids; i++)
		//for (int i = 0; i < cap; i++)
	{

		cout << "name: " << nameArray[i] << " Age: " << 2017 - yearArray[i]
			<< " result " << resultArray[i] / 60 << "min "
			<< resultArray[i] % 60 << "sec" << endl;

	}

}

int findKidPosision(string nameArray[], string kidNames, int nrKids)
{
	int pos = -1;

	for (int i = 0; i < nrKids; i++)
	{

		if (kidNames == nameArray[i])
		{

			pos = i;

		}

	}

	return pos;
}

void addNewKid(string nameArray[], int yearArray[], int &nrKids)
{

	string newKidName = "";
	int pos = -2;

	cout << "what is the new kids name: ";

	getline(cin, newKidName);
	pos = findKidPosision(nameArray, newKidName, nrKids);

	if (pos == -1)
	{


		nameArray[nrKids] = newKidName;

		cout << "what year was this kid born: ";
		cin >> yearArray[nrKids]; cin.ignore();

		cout << "This kid was added " << newKidName << " year "
			<< 2017 - yearArray[nrKids] << endl;

		nrKids++;
	}
	else
	{

		cout << "This kid dose alredy exist on " << pos + 1 << endl;

	}

}

void removKid(string nameArray[], int yearArray[], int &nrKids)
{

	string newKidName = "";
	int pos = -2;
	cout << "what kid do you want to remov: ";
	getline(cin, newKidName);
	pos = findKidPosision(nameArray, newKidName, nrKids);

	if (pos != -1)
	{

		cout << nameArray[pos] << " " << yearArray[pos]
			<< "was removed" << endl;

		for (int i = pos; i < nrKids; i++)
		{

			nameArray[i] = nameArray[i + 1];
			yearArray[i] = yearArray[i + 1];

		}

		nrKids--;

	}
	else
	{

		cout << "We can't find this kid so we can't remove it " << endl;

	}

}

void RandomizeResults(int resultArray[], int nrKids)
{

	for (int i = 0; i < nrKids; i++)
	{

		resultArray[i] = rand() % (1500 - 720) + 720;

	}


}

int findWinner(int resultArray[], int nrKids)
{
	int pos = 0;
	int fastesTime = resultArray[0];

	for (int i = 1; i < nrKids; i++)
	{

		if (resultArray[i] < fastesTime)
		{

			fastesTime = resultArray[i];
			pos = i;

		}

	}

	return pos;

}

void findKidsWhifAge(string nameArray[], int ageArray[], int nrKids, int serchedAge)
{
	int count = 0;

	for (int i = 0; i < nrKids; i++)
	{

		if (2017 - ageArray[i] == serchedAge)
		{

			cout << "Name: " << nameArray[i] << " Age: " << ageArray[i] << endl;
			count++;

		}

	}

	if (count < 1)
		cout << "No kid had that age!" << endl;



}

//template <typename T> 
void sortResults(string nameArray[], int ageArray[], int resultArray[], int nrKids)
{
	//T temp;

	int posOfSmalest = 0, tempInt;
	string tempString;

	for (int i = 0; i < nrKids - 1; i++)
	{
		posOfSmalest = i;

		for (int h = i + 1; h < nrKids; h++)
		{

			if (resultArray[h] < resultArray[posOfSmalest])
				posOfSmalest = h;

		}

		//name
		tempString = nameArray[i];
		nameArray[i] = nameArray[posOfSmalest];
		nameArray[posOfSmalest] = tempString;

		//age
		tempInt = ageArray[i];
		ageArray[i] = ageArray[posOfSmalest];
		ageArray[posOfSmalest] = tempInt;

		//Results
		tempInt = resultArray[i];
		resultArray[i] = resultArray[posOfSmalest];
		resultArray[posOfSmalest] = tempInt;

	}

}

void writToFile(string fillName, string nameArray[], int yearArray[], int resultArray[], int nrKids)
{

	ofstream out;

	out.open(fillName);

	out << nrKids;
	out << endl;

	for (int i = 0; i < nrKids; i++)
	{

		out << nameArray[i];
		out << endl;
		out << yearArray[i];
		out << endl;
		out << resultArray[i];

	}

	out.close();

}

void average(int resultArray[], int nrKids)
{
	int avereg = 0;

	for (int i = 0; i < nrKids; i++)
	{

		avereg += resultArray[i];

	}

	avereg = avereg / nrKids;

	cout << "Average time was:" << avereg / 60 << " min "
		<< avereg % 60 << " sec" << endl << endl;
}