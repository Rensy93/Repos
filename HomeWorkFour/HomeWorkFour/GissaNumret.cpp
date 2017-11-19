#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int Number = 150, guess = 200, guessCounter = 0;
	Number = rand()%100+1;
	cout << "We have generated a number between 1-100 time for you to start guessing: ";
	cin >> guess;
	guessCounter++;
	
	while (guess != Number)
	{
		cout << "Try agin!!\n";
		cin >> guess;

		if (guess == Number - 1)
			cout << "You where on away!\n";
	
		else if (guess == Number + 1)
			cout << "You where on away!\n";
	
		guessCounter++;
	}

	cout<<"You guesst right in "<<guessCounter++<<" tryes =D" << endl << endl;

	system("pause");
	return 0;
}