#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

//funktion deklarations
int menu();
void addFrieand(string arrayNames[], int arrayCell[], int arrayBirtyYear[], int nrfriends);


int main()
{
	//declarations
	int numberOfFriends = 0, playerChoice;
	string *names = nullptr;
	int *cellNumber = nullptr;
	int *birthyear = nullptr;

	playerChoice = menu();

	switch (playerChoice)
	{
	case 1:
	{
		//read from file

		break;
	}
	case 2:
	{
		//write from file

		break; 
	}
	case 3:
	{
		//add person
		numberOfFriends++;
		break;
	}
	case 4:
	{
		//remove person

		break;
	}
	case 5:
	{
		//find number given name

		break;
	}
	case 6:
	{
		//find name given number

		break;
	}
	case 7:
	{
		//equal doubledigets
		
		break;
	}
	case 8:
	{
		//show all

		break;
	}
	default:
		break;
	}



	system("pause");
	return 0;
}

//Funktions
int menu()
{
	int playerChoice;

	cout << "1. Read from file" << endl
		<< "2. Write to file" << endl
		<< "3. Add a person" << endl
		<< "4. Remove a person" << endl
		<< "5. search a cellnumber given a persons name" << endl
		<< "6. search a name given the cellnumber" << endl
		<< "7. search all people that will beckome enven double digets given a year" << endl
		<< "8. Show everyone in you friendlist" << endl << endl
		<< "youre choice: ";

	cin >> playerChoice; cin.ignore();

	return playerChoice;
}
void addFrieand(string arrayNames[], int arrayCell[], int arrayBirtyYear[], int nrfriends) 
{
	//number of frieandcs.
}