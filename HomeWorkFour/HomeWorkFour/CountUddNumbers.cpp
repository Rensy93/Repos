#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Gör ett program som låter användaren mata in hur många heltal hen vill generera
//samt inom vilket intervall dessa ska vara.Slumpa detta antal heltal, skriv ut dem,
//beräkna hur många som var udda och presentera avslutningvis antalet udda tal.Använd for - sats för iterationen.

int main()
{
	srand(time(0));
	int numberCounter = 0, intervalMax = 0, intervalMin = 0, number = 0, uddcount=0;
	cout << "*************************************" << endl;
	cout << "Welcome to \"Count the uddnumbers\"" << endl
		<< "©2017 G503, Inc. All rights reserved." << endl;
	cout << "*************************************" << endl << endl;
	cout << "How meny integers do you wanna generate?? ";
	cin >> numberCounter;
	cout << "what should the max numbers be for the interval?? ";
	cin >> intervalMax;
	cout << "what should the max numbers be for the interval?? ";
	cin >> intervalMin;

	for (int i = 0; i < numberCounter; i++)
	{
		number = rand() % (intervalMax - intervalMin) + intervalMin;
		cout << "Nr: " << number << "**********" << endl;
		if (number % 2 != 0)
			uddcount++;
	}
	cout << "We generated " << numberCounter << " number for you and " << uddcount 
		<< " of them was uddnumbers\nwhich "<< (uddcount / (double)numberCounter) * 100.0 << "%" << endl << endl;


	system("pause");
	return 0;
}
