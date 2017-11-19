#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

	ofstream out;
	int nrOfpersons = 0;

	cout << "how meny persons do you want to create?? ";
	cin >> nrOfpersons; cin.ignore();

	//out.open("C://temp//persons.txt", ios::app);
	out.open("C://temp//persons.txt");

	out << nrOfpersons;
	out << endl;

	for (int i = 0; i < nrOfpersons; i++)
	{

		string tempName;
		int tempAge = 0;

		cout << "name: ";
		cin >> tempName; cin.ignore();

		cout << "Year of birth: ";
		cin >> tempAge;  cin.ignore();

		out << tempName;
		out << endl;

		out << tempAge;
		out << endl;

	}

	out.close();

	//skriv utt innehålet
	//exemple utskrift
	//Name: olle
	//Birthyear: 1991

	fstream in;
	in.open("c://temp//persons.txt");

	int nrOfpersons2 = 0;
	in >> nrOfpersons2;

	cout << nrOfpersons2 << endl;
	for (int i = 0; i < nrOfpersons2; i++)
	{

		string tempNamn;
		string tempAge;

		in >> tempNamn;
		in >> tempAge;

		cout << tempNamn << endl;
		cout << tempAge << endl;

	}

	system("pause");
	return 0;
}