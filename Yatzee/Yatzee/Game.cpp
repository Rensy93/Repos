#include "Yatzee.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	srand(static_cast<unsigned int>(time(0)));

	int nrOfPlayers=0;

	cout << "Hur många ska vara med och spela? ";
	cin >> nrOfPlayers; cin.ignore();

	//Skapa ett Yatzee-objekt baserat på nrOfPlayers
	Yatzee yatzee(nrOfPlayers);
	//Låt användaren mata in namnen på spelarna och lägg till spelarna till Yatzee-objektet
	for (int i = 0; i < nrOfPlayers; i++)
	{
		string name = "";
		cout << "Enter name of player " << i + 1 << ": ";
		getline(cin, name);
		yatzee.addPlayer(name);
		cout << endl << endl;
	}
	//Så länge som inte alla spelare har spelat klart
	while (!yatzee.areAllPlayersDone())
	{
		//Presentera protokollet för aktuell spelare
		cout << yatzee.protocolInfoOfCurrentPlayer() << endl << endl;
		//Kasta en omgång tärningar
		yatzee.toss();
		//Upprepa 2 gånger
		for (int i = 0; i < 2; i++)
		{
			int diceSave = -1;
			//Visa tärningarnas utfall
			cout << yatzee.infoOfLatestToss() << endl;
			//Låt användaren mata in vilket tärningsvärde som ska sparas
			cout << "enter the dice value that you like to save: ";
			cin >> diceSave; cin.ignore();
			//Kasta alla övriga tärningar
			yatzee.toss(diceSave);
		}
		//Visa tärningarnas utfall
		cout << yatzee.infoOfLatestToss() << endl;
		//Låt användaren mata in vilket tärningsvärde resultatet ska sparas på
		int saveDices;
		bool wasAdded = false;
		cout << "enter the dice value that you like to save and there value will be added to your protocol: ";
		cin >> saveDices; cin.ignore();
		wasAdded = yatzee.addResult(saveDices);
		//Så länge som tärningsvärdet redan är ifyllt
		while (!wasAdded)
		{
			cout << "You have alredy used that dice value, try agin!" << endl;
			cout << "enter the dice value that you like to save and there value will be added to your protocol: ";
			cin >> saveDices; cin.ignore();
			if (yatzee.addResult(saveDices))
			{
				//Låt användaren mata in vilket tärningsvärde resultatet ska sparas på
				wasAdded = true;
			}
		}
		//Presentera protokollkolumnen för aktuell spelare	
		cout << yatzee.protocolInfoOfCurrentPlayer() << endl;
		//Nästa spelares tur
		yatzee.nextPlayersTurn();

		//Rensa skärmen och pausa
		system("puase");
		system("cls");
	}
	//Presentera protokollkolumnen och totalsumman för varje spelare
	for (int i = 0; i < nrOfPlayers; i++)
	{
		yatzee.nextPlayersTurn();
		cout<<yatzee.protocolInfoOfCurrentPlayer();
	}
	system("pause");
	return 0;
}