#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;
const int MAX_PLAYERS = 100;
struct Player
{
	string name;
	int score,roundScore;

};

int main()
{
	int tid = time(0);
	srand(tid);
	cout << "**************************************************" << endl 
		<< "Welcome to the Dice duale" << endl
		<< "all copyrights are owned buy G503 Enterprice" << endl
		<< "**************************************************" << endl << endl;
	int numberOfPlayer =0, runds=0, score=0, totalRunds=0 , dice1=0,dice2=0,h=0, largestRundScore=0;
	Player player[MAX_PLAYERS];                                                                                                                                                                                       
	cout << "How meny players are you?? ";
	cin >> numberOfPlayer;
	
	
	for (int i=0; i < numberOfPlayer; i++)
	{
		cout << "Name of player " << i + 1 << endl;
		cin >> player[i].name;
		player[i].score = 0;
	}
	cout << "How meny roundsdo you want the match to be??\n";
	cin >> totalRunds;
	while(runds < totalRunds)
	{
		while (h<numberOfPlayer)
		{
			dice1 = rand() % 6 + 1;
			dice2 = rand() % 6 + 1;
			player[h].roundScore = dice1 + dice2;
			cout << player[h].name << " had a rundscore of " << player[h].roundScore << endl;
			h++;
		}
		h = 0;

		for (int i=0; i < numberOfPlayer; i++)
		{
			if (player[i].roundScore > player[largestRundScore].roundScore)
			{
				largestRundScore = i;
				cout << largestRundScore<<endl;
			}
			
		}
		int dubble[MAX_PLAYERS];
		for (int p = 0; p < numberOfPlayer; p++)
		{

			if (player[p].roundScore == largestRundScore)
			{
				int n = 0;
				dubble[p] = p;
				cout << player[p].name << " wins with a score of " << player[p].roundScore << endl;
			}
		}
		for (int j = 0; j<dubble[j];j++)
		{
			player[j].score++;
			cout << player[j].name<<" wins with a score of " << player[j].roundScore<<endl;
		}
		
		cout<<"*********************************************************" << endl;
		runds++;
	}
	for(int idiot = 0; idiot < numberOfPlayer; idiot++)
	{
		cout << player[idiot].score <<"s"<< endl << endl;
	}
	
	cout<<"hmm, something is wrong haha :p";


	system("pause");
	return 0;
}