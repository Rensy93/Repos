//Created by Rasmus Flomén 2017-09-07

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>// för att cout osv blev ambiguous vet ej varför dock.
#include <ctime>

using namespace std;

int main()
{
	//för svenska täcker så som åäö =)
	locale swedish("swedish");
	locale::global(swedish);

	srand(time(0));
	string playerOne = "", playerTwo = "", quitQuestion="Yes";
	int playerOneScore = 0, playerTwoScore = 0, playerAnswer = 0;
	int	whatPlayer=0; // för att se vilken spelares tur det är. 0 = spelare1 och 1 = spaler2
	int roundsTotal = 0, roundsCounter = 0;
	int numberOne = 0, numberTwo = 0;
	
	cout << "******************************************************"<<endl;
	cout << "Welcome to this year's edition of \"Battle Royal of Mathematics\"" << endl
		<< "©2017 G503, Inc. All rights reserved"<<endl;
	cout << "*****************************************************"<<endl<<endl;
	cout << "Please enter the names of the first combatant: ";
	
	getline(cin, playerOne);
	
	cout << "Please enter the names of the second combatant: ";
	
	getline(cin, playerTwo);
	

	//för att avgöra om det vill spela en ny match.
	while (quitQuestion != "No" && quitQuestion != "no")
	{
		cout << endl<<"How many rounds will this match last? ";
		cin >> roundsTotal; 
		//För att kontrolera så att spelaren har matat in ett nummer och om det inte är fallet så får de ett felmedalnde.
		
		while (cin.fail())
		{
			cout << "That is not an integer Try agin: ";
			cin.clear();
			cin.ignore();
			cin >> roundsTotal;
		}
		
		cout << endl << "This years first battle will be fought between " << playerOne 
			<< " and " << playerTwo << " over a total of " << roundsTotal 
			<< " rounds\nLet the battle begin!!" << endl << endl;
		
		//while loop för att hålla koll på antalet rundor.
		
		while (roundsCounter < roundsTotal)
		{
			//för att hålla koll på wilken spelares tur det är.
			whatPlayer = 0; 
			while (whatPlayer < 2)
			{
				if (whatPlayer == 0)
				{

					numberOne = rand() % 17 + 2;
					numberTwo = rand() % 17 + 2;
					cout << playerOne << ": What is " << numberOne << "*" << numberTwo << "? ";
					cin >> playerAnswer; 
					//för att se om man kan lösa problemet om spelaren inputar !=int
					while (cin.fail())
					{
						cout << "That is not an integer Try agin ";
						cin.clear();
						cin.ignore();
						cin >> playerAnswer;
					}
					if (playerAnswer == numberOne*numberTwo)
						playerOneScore++;

				}
				else
				{
					numberOne = rand() % 17 + 2;
					numberTwo = rand() % 17 + 2;
					cout << playerTwo << ": What is " << numberOne << "*" << numberTwo << "? ";
					cin >> playerAnswer; 
					//Kontrol av input.
					while (cin.fail())
					{
						cout << "That is not an integer Try agin ";
						cin.clear();
						cin.ignore();
						cin >> playerAnswer;
					}
					if (playerAnswer == numberOne*numberTwo)
						playerTwoScore++;
				}
				whatPlayer++;
			}
			roundsCounter++;
		}
		//resetar rund räknaren
		roundsCounter = 0;
		if (playerOneScore > playerTwoScore)
			cout << endl << playerOne << " had " << playerOneScore << " correct answers and " << playerTwo
			<< " had " << playerTwoScore << " correct answers. " << endl
			<< playerOne << " is the winner of this "<<roundsTotal 
			<<" rounded battle and will live to fight an other day!! " << endl << endl;

		else if (playerTwoScore > playerOneScore)
			cout << endl << playerOne << " had " << playerOneScore << " correct answers and " << playerTwo
			<< " had " << playerTwoScore << " correct answers. " << endl 
			<< playerTwo << " is the winner of this " << roundsTotal << " rounded battle and will live to fight an other day!!" << endl << endl;

		else
		{
			cout << endl << playerOne << " had " << playerOneScore << " correct answers and " << playerTwo 
				<< " had " << playerTwoScore << " correct answers. " << endl
				<< "The match ended in a draw and both players will be executed!!" << endl << endl;
		}

		//återstäler poängen.
		playerOneScore = 0;
		playerTwoScore = 0;
		//om dom vill spela igen
		cout << "**********************************************" << endl;
		cout << "Do you want to duel agin??(Yes/No)" << endl << endl;
		cin >> quitQuestion; cin.ignore();
		cout << "**********************************************" << endl;
	}
	system("pause");
	//Nu var spelet slut =D
	return 0;
}