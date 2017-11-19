#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int timeNow = time(0);
	srand(timeNow);
	string player1, player2;
	int dice=0, p1Guess, p2guess;

	cout << "Enter player ones name: \n";
	getline(cin, player1);
	cout << "Enter player twos name: \n";
	getline(cin, player2);
	dice = rand() %100 + 1;
	cout << player1 << " guees a number" << endl;
	cin >> p1Guess;
	cout << player2 << " guees a number" << endl;
	cin >> p2guess;
	if (p1Guess == dice)
	{
		cout << player1 << " win\n";
	}
	if(p2guess == dice)
	{
		cout << player2 << " win\n";
	}
	if (p1Guess!=dice && p2guess!=dice)
	{
		cout << "no winer\n";
	}
	cout << dice<<endl;

	cout << pow(5, 2);
	system("pause");
	return 0;
}