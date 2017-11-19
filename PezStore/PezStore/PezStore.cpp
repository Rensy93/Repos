#include "PezDicpenser.h"
#include <iostream>

int menu();
const int CAP = 10;

int main()
{
	int userChoise = -1;
	PezDispencer array[CAP];
	
	do
	{
		userChoise = menu();

		switch (userChoise)
		{
		case 1:
		{

			string name;
			int size;

			cout << "what is the name of dicpenser ";
			getline(cin, name);
			
			cout << "what is the size of dicpenser ";
			cin >> size; cin.ignore();
			array[0] = PezDispencer(name, size);
			break;
			
		}
		case 2:
		{
			int amunt = 0;
			cout << "how meny pez to add ";
			cin >> amunt; cin.ignore();
		
			array[0].addPezDicpencer(amunt);
			break;
		}
		case 3:
		{

			if (array[0].DicpendPez())
			{
				cout << "pez was dispended" << endl;
			}
			else
			{
				cout << "there is no pez left ,haha" << endl;
			}
			break;
		}
		case 4:
		{
			cout << array[0].toString() << endl;

			break;
		}
		
		default:
			break;
		}

	} while (userChoise!=0);
	

	system("pause");
	return 0;
}

int menu()
{

	int userCohice = -1;

	cout << "1. New Dispencer" << endl
		<< "2. add pez" << endl
		<< "3. Dicpend pez" << endl
		<< "4 pez info" << endl
		<< "your choice" << endl;
	cin >> userCohice; cin.ignore();

		return userCohice;
}