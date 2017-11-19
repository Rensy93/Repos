#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	int randNumber = 0, userNumber = 0, loop = 1;
	srand(time(0));
	while (loop != 0)
	{
		randNumber = rand()%101;
		cout << randNumber << endl;

		//ärdet ett hel tal??
		if (randNumber % 2 == 0)
			cout << randNumber << " is a even number!!" << endl;
		else
		{
			cout << randNumber << " is a oneven number!!" << endl;

		}

		cout << "enter a number: ";
		cin >> userNumber;

		if (userNumber > 50 && userNumber < 100)
			cout << userNumber << " is 50 < number <100" << endl;

		if (userNumber > 70 && userNumber < 80)
			cout << userNumber << " is 70 < number <80" << endl;


		cout << "*************" << endl << "enter 0 to quit" << endl << "*************" << endl;
		cin >> loop;
	}


	system("pause");
	return 0;
}