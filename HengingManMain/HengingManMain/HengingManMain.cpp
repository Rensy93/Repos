#include <iostream>
#include <string>

using namespace std;



int main()
{
	string playerName = "", hostWord = "", wordCheck = "";
	char guess = ' ';
	int playerLife = 10;
	int count = 0;
	
	cout << "Host plz enter a word! ";
	getline(cin,hostWord);
	//fill up word check
	for (int i = 0; i < hostWord.length(); i++)
		wordCheck += "_";
	//cleans console
	system("cls");

	//player show up
	cout << "Player plz enter your name! "<<endl;
	getline(cin, playerName);

	while (wordCheck != hostWord && playerLife > 0)
	{
		cout << wordCheck <<endl <<endl
			<< "player make your guess plz: ";
		cin >> guess; cin.ignore();
		for (int i = 0; i < hostWord.length() && count > 0; i++)
		{
			if (guess == hostWord[i])
			{
				wordCheck[i] = guess;
				count++;
			}
		}
		if (count <= 0)
			playerLife--;
		
		count = 0;
		cout << "You have " << playerLife << " trys left\n";
	}
	if (playerLife > 0)
	{
		cout << "You guesst right and had "<<10-playerLife<<" tryes left "<<" and You didn't die to day =D"<<endl<<endl;

	}
	else
	{
		cout << "Today was your day to die But atlest it was a good day to die!"<<endl<<endl;
	}

	system("pause");
	return 0;
}