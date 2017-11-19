#include "BlackJackHeader.h"
#include <iostream>
#include <string>

using namespace std;

int menu()
{
	int userChoice = 0;

	cout << "1. Play BlackJack" << endl
		<< "2. Order a drink" << endl
		<< "3. Get moore money" << endl
		<< "4. Cash out and go home" << endl
		<< "Your choice: ";

	cin >> userChoice; cin.ignore();

	return userChoice;

}

int blackJackMenu(string name)
{
	int userChoice = 0;

	cout << "Welcomme to the table " << name <<endl
		<< "1. Place a bet" << endl
		<< "2. Order a drink" << endl
		<< "3. Get moore money" << endl
		<< "4. Leve the table" << endl
		<< "Your choice: ";

	cin >> userChoice; cin.ignore();

	return userChoice;
}

int drinkMenu(string name) {

	int userChoice = 0;

	cout << "Hey "<< name << "what do you want"<<endl
		<<"1. Place a bet" << endl
		<< "2. Order a drink" << endl
		<< "3. Get moore money" << endl
		<< "4. Leve the table" << endl
		<< "Your choice: ";

	cin >> userChoice; cin.ignore();

	return userChoice;
}
