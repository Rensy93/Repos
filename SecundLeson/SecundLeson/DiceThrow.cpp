#include <iostream>
#include <cstdlib> // Standard library;
#include <ctime> //time right now
#include <string>

using namespace std;

int main()
{
	int timeNow = time(0); //tiden i millisekunder från 1 jan 1970
	srand(timeNow); // seed(star) for random generated number
	int diceOne = 0, diceTwo = 0,sumOfDice = 0;
	int cunt = 0;
	for (int i=0; i<5; i++)
	{
		//slumpa heltalsvärden för deceOne and diceTwo
		diceOne = rand() % 6 + 1;
		diceTwo = rand() % 6 + 1;

		cout << "First dice: " << diceOne << " and Secund dice: " << diceTwo << endl;
		sumOfDice = diceOne + diceTwo;
		cout << "Sum of the dices are: " << sumOfDice << endl << endl;
	}
	cout << endl << "nu kommer while loopen!!!!!!!!!! :P" << endl;
	cout << "****************************************" << endl << endl;

	
	while ( cunt < 5)
	{
		//slumpa heltalsvärden för deceOne and diceTwo
		diceOne = rand() % 6 + 1;
		diceTwo = rand() % 6 + 1;
		
		cout << "frst dice: " << diceOne << " and Secon dice " << diceTwo << endl;
		sumOfDice = diceOne + diceTwo;
		cout << "sum of the dices are: " << sumOfDice << endl <<endl;

		cunt++;
		
	}
	system("pause");
	return 0;
}



// while (comando < quit)