#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int userchoice=-1;
	cout << "1) Cirkle" << endl
		<< "2) Rektangle" << endl
		<< "0) Avsluta" << endl
		<< "ditt val: ";
	cin >> userchoice;

	while (userchoice != 0)
	{
		switch (userchoice)
		{
			case 1:
			{
				cout << "Du valde cirkel" << endl;
				// inmatning av radien och beräkning av area och omkrets 
				break;
			}
			case 2:
			{
				cout << "du valede rektangle" << endl;
				break;
				//
			}
			case 0:
			{
				cout << "du valde att avsluta" << endl;
				userchoice = -1;
				break;
			}
			default:
			{
				cout << "felaktingt val" << endl;
				break;
			}
		}

		cout << "1) Cirkle" << endl
			<< "2) Rektangle" << endl
			<< "0) Avsluta" << endl
			<< "ditt val: ";
		cin >> userchoice;

	}


		system("pause");
		return 0;
}