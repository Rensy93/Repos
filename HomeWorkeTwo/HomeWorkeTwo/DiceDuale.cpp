#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
	int timeNow = time(0);
	srand(timeNow);
	string player1, player2;
	int rounds = 0, diceOne, diceTwo, playerOneScore = 0, playerTwoScore = 0, draws=0;
	int i=0;
	//string end = "yes", yes = "yes";

	cout << "Enter player ones name: \n";
	getline(cin, player1);
	cout << "Enter player twos name: \n";
	getline(cin, player2);
	cout << "How meny rounds: \n";
	cin >> rounds;
	cout << endl <<"Welcome to this " << rounds << " rounds \"Dice Duale\" between " << player1 << " and " << player2<<endl<<endl;

	
	//while (end==yes)
	while (i<rounds)
	{	
		int p1Temp = 0, p2Temp = 0;
		diceOne = rand() % 6 + 1;
		diceTwo = rand() % 6 + 1;
		cout << player1 << " " << diceOne << " and " << diceTwo;
		p1Temp = diceOne + diceTwo;
		cout << endl << p1Temp << endl;
		
		diceOne = rand() % 6 + 1;
		diceTwo = rand() % 6 + 1;
		cout << player2 << " " << diceOne << " and " << diceTwo;
		p2Temp = diceOne + diceTwo;
		cout << endl << p2Temp<<endl;
		if (p1Temp > p2Temp)
		{
			cout << player1 << " Wins this round whif a score of " << p1Temp << " to " << p2Temp;
			playerOneScore++;
		}
		else if (p2Temp>p1Temp)
		{
			cout << player2 << " Wins this round whif a score of " << p2Temp << " to " << p1Temp;
			playerTwoScore++;
		}
		else
		{
			cout << player2 << " It was a draw " << p2Temp << " to " << p1Temp;
			draws++;
		}

		i++;
		cout<<"\n\n*********************************************************\n\n";
		//cout << "do you what to play one moore rund?? yes or no\n\n";
		//cin >> end;

	}

	if (playerOneScore > playerTwoScore)
	{
		cout << player1 << " Wins the match!! " << playerOneScore << " to " << playerTwoScore
			<< " And " << draws << " rounds ended in a draw" << endl << endl;;
		
	}
	else if(playerTwoScore > playerOneScore)
	{
		cout << player2 << " Wins the match!! " << playerTwoScore << " to " << playerOneScore
			<< " And " << draws << " rounds ended in a draw" << endl << endl;;
		
	}
	else
	{
		cout << "The match ended in a draw with a score of " << player1 << " " << playerOneScore << " to " 
			<< player2 << " " << playerTwoScore 
			<<" And "<<draws<<" rounds ended in a draw" << endl << endl;
	}
	
	system("pause");
	return 0;
}