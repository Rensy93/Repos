#include <iostream>
#include "BlackJackHeader.h"
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	//variabler
	string playerName;

	int userChoice = 0;


	while (userChoice != 4)
	{
		

		switch (userChoice)
		{
		//play blackjack
		case 1:
		{
			//blackjack menu 
			while (userChoice != 4)
			{


				userChoice = blackJackMenu(playerName);
				switch (userChoice)
				{
				case 1:
				{
					//place a bet

					break;

				}
				case 2:
				{
					//Order a drink

					break;

				}case 3:
				{
					//Get moore money
					break;

				}
				
				default:
					cout << "I'm not capebale of doing that try agin!!" << endl;
					break;
				}
			}

			break;
		}
		case 2:
		{
			// Order a drink
			userChoice = drinkMenu(playerName);
			switch (userChoice)
			{
			default:
				break;
			}
			break;

		}
		case 3:
		{
			//Get moore money
			break;

		}
		case 4:
		{
			//Cash out and go home
			break;

		}
		default:
			cout << "I'm not capebale of doing that try agin!!" << endl;
			break;
		}

	}
	system("pause");
	return 0;
}
