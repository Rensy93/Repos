#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

const int CAP = 20;

int main()
{
	string name[CAP]{};
	string nameCheck = "";
	int number[CAP]{};
	int userChoise=0, peopleCount=0, numberCheck=0;

	while (userChoise != -1)
	{
		cout << "1. Do want to enter a name and number." << endl
			<< "2. Get a persons number" << endl
			<< "3. get person by number" <<endl
			<< "4. Avslusta" << endl
			<< "Ditt val: ";
		cin >> userChoise; cin.ignore();


		switch (userChoise)
		{
		case 1:
		{
			//enter person and number
			cout << "what is the name off person " << peopleCount+1 << ": ";
			getline(cin, name[peopleCount]);
			cout <<endl<< "what is " <<name[peopleCount]<<"'s number?? ";
			cin >> number[peopleCount]; cin.ignore();
			peopleCount++;
			break;
		}
		case 2:
		{
			//get number
			cout <<endl << "what person are you loking for?? ";
			getline(cin, nameCheck);
			for (int i = 0; i < CAP && name[i] != ""; i++)
			{
				if (nameCheck == name[i])
					cout << name[i] << "    " << number[i] << endl;
			}
			break;
		}
		case 3:
		{
			//get person:
			cout << endl << "what number dose the person you are looking for?? ";
			cin >> numberCheck;
			for (int i = 0; i < CAP && number[i] != 0; i++)
			{
				if (numberCheck == number[i])
					cout << name[i] << "    " << number[i] << endl;
			}
			break;

		}
		case 4:
		{
			//avsluta
			userChoise = -1;
			break;
		}
		default:
			cout << "w00t!! try agin" << endl<<endl;
			break;
		}
	}

	system("pause");
	return 0;
}