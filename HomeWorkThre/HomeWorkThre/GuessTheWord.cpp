#include <iostream>
#include <string>
#include <cstdlib>
//#include <fstream>

using namespace std;

int main()
{
	locale swedish("swedish");
	locale::global(swedish);


	string wordOne = "";
	string line ="", player="";
	
	char guess = ' ';
	int tryes = 10;


	cout << "Host enter a word";
	getline(cin, wordOne);
	cout << "ender underscore of every leter in the word";
	getline(cin, line);

	cout << "player name?? ";
	getline(cin, player);
	while (tryes > 0)
	{
		cout << player << "guess a leter plz " << endl;
		cin >> guess;

		for (int i = 0; i < wordOne.length(); i++)
		{
			if (guess == wordOne.at(i))
			{
				line.at(i) = guess;
			}
		}
	}

	system("pause");
	return 0;
}