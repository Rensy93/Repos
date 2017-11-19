#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
const int CAP = 6;
int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);//kontrolerar om du har mines leeks
	srand(time(0));
	int *dice = nullptr;
	int totals[6] = {};
	int capasity = 0;

	cout << "How menny times will you throw the dice?? ";
	cin >> capasity; cin.ignore();

	dice = new int[capasity];
	

	for (int i = 0; i < capasity; i++)
		dice[i] = rand() % 6 + 1;

	for (int i = 0; i < 6 ; i++)
	{
		for (int h = 0; h < capasity; h++)
		{
			if (dice[h] == i+1)
			{
				totals[i]++;
			}
		}
	}

	for (int i = 0; i < capasity; i++)
	{
		cout << dice[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << i+1 << ": ";
		for (int h = 0; h < totals[i]; h++)
		{
			cout<< " #";
		}
		cout << endl;
	}
	
	delete[] dice;

	system("pause");
	return 0;
}

