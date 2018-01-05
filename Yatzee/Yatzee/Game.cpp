#include "Yatzee.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	srand(static_cast<unsigned int>(time(0)));

	int nrOfPlayers=0;

	cout << "Hur m�nga ska vara med och spela? ";
	cin >> nrOfPlayers; cin.ignore();

	//Skapa ett Yatzee-objekt baserat p� nrOfPlayers
	Yatzee yatzee(nrOfPlayers);
	//L�t anv�ndaren mata in namnen p� spelarna och l�gg till spelarna till Yatzee-objektet
	for (int i = 0; i < nrOfPlayers; i++)
	{
		string name = "";
		cout << "Enter name of player " << i + 1 << ": ";
		getline(cin, name);
		yatzee.addPlayer(name);
		cout << endl << endl;
	}
	//S� l�nge som inte alla spelare har spelat klart
	while (!yatzee.areAllPlayersDone())
	{
		//Presentera protokollet f�r aktuell spelare
		cout << yatzee.protocolInfoOfCurrentPlayer() << endl << endl;
		//Kasta en omg�ng t�rningar
		yatzee.toss();
		//Upprepa 2 g�nger
		for (int i = 0; i < 2; i++)
		{
			int diceSave = -1;
			//Visa t�rningarnas utfall
			cout << yatzee.infoOfLatestToss() << endl;
			//L�t anv�ndaren mata in vilket t�rningsv�rde som ska sparas
			cout << "enter the dice value that you like to save: ";
			cin >> diceSave; cin.ignore();
			//Kasta alla �vriga t�rningar
			yatzee.toss(diceSave);
		}
		//Visa t�rningarnas utfall
		cout << yatzee.infoOfLatestToss() << endl;
		//L�t anv�ndaren mata in vilket t�rningsv�rde resultatet ska sparas p�
		int saveDices;
		bool wasAdded = false;
		cout << "enter the dice value that you like to save and there value will be added to your protocol: ";
		cin >> saveDices; cin.ignore();
		wasAdded = yatzee.addResult(saveDices);
		//S� l�nge som t�rningsv�rdet redan �r ifyllt
		while (!wasAdded)
		{
			cout << "You have alredy used that dice value, try agin!" << endl;
			cout << "enter the dice value that you like to save and there value will be added to your protocol: ";
			cin >> saveDices; cin.ignore();
			if (yatzee.addResult(saveDices))
			{
				//L�t anv�ndaren mata in vilket t�rningsv�rde resultatet ska sparas p�
				wasAdded = true;
			}
		}
		//Presentera protokollkolumnen f�r aktuell spelare	
		cout << yatzee.protocolInfoOfCurrentPlayer() << endl;
		//N�sta spelares tur
		yatzee.nextPlayersTurn();

		//Rensa sk�rmen och pausa
		system("puase");
		system("cls");
	}
	//Presentera protokollkolumnen och totalsumman f�r varje spelare
	for (int i = 0; i < nrOfPlayers; i++)
	{
		yatzee.nextPlayersTurn();
		cout<<yatzee.protocolInfoOfCurrentPlayer();
	}
	system("pause");
	return 0;
}