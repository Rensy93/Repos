#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
const int CAP = 30;

int main()
{
	int playerMenyChoise=0, playerCounter = 0;
	string players[CAP] = {}, playerCheak;
	int playerScore[CAP] = {};

	//cout << "1. Registrate a new player" << endl
	//	<< "2. Add point to a player" << endl
	//	<< "3. Show all players" << endl
	//	<< "4. Show all players that have more the x points" << endl
	//	<< "5. Team total points" << endl
	//	<< "6. quit" << endl
	//	<< "Ditt val: ";
	//cin >> playerMenyChoise; cin.ignore();
	//cout << endl;
	//
	
	while (playerMenyChoise != -1)
	{
		cout << "1. Registrate a new player" << endl
			<< "2. Add point to a player" << endl
			<< "3. Show all players" << endl
			<< "4. Show all players that have more the x points" << endl
			<< "5. Team total points" << endl
			<< "6. quit" << endl;
		cin >> playerMenyChoise; cin.ignore();
		cout << endl;

		switch (playerMenyChoise)
		{
			case 1:
			{
				//Add player
				cout << "Enter the name of the player you want to add: ";
				getline(cin, players[playerCounter]);
				playerCounter++;
				break;
			}
			case 2:
			{
				//add points
				cout << "what player do you want to add point to? ";
				getline(cin, playerCheak);
				for (int i = 0; i < CAP && players[i] != ""; i++)
				{
					if (playerCheak == players[i])
						playerScore[i]++;
				

				}
				break;
			}
			case 3:
			{
				//show all players
				for (int i = 0; i < CAP && players[i] != ""; i++)
				{
					cout << players[i] << "    " << playerScore[i] << endl;
				}
				break;
			}
			case 4:
			{
				//show all players with x points
				cout << "What is the min points for the player to show?? ";
				cin >> playerMenyChoise; cin.ignore();
				for (int i = 0; i < CAP && players[i] != ""; i++)
				{
					if(playerScore[i]>playerMenyChoise)
					cout << players[i] << "    " << playerScore[i]<<endl;
				}
				
				break;
			}
			case 5:
			{
				//team total points
				int totalPoints = 0;
				for (int i = 0; i < CAP && players[i] != ""; i++)
				{
					totalPoints += playerScore[i];
				}
				cout << "Teams total points is: " << totalPoints<<endl;
				break;
			}
			case 6:
			{
				//avsluta
				cout << "You disided yo quit!"<<endl;
				playerMenyChoise = -1;
				break;
			}
			default:
			{
				cout << "incorect choise"<<endl;
			}
		}

		/*cout << "1. Registrate a new player" << endl
			<< "2. Add point to a player" << endl
			<< "3. Show all players" << endl
			<< "4. Show all players that have more the x points" << endl
			<< "5. Team total points" << endl
			<< "6. quit" << endl;
		cin >> playerMenyChoise; cin.ignore();*/

	}

	cout << endl << endl;
	system("pause");
	return 0;
}