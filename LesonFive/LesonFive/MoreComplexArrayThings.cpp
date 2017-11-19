#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

const int CAP = 5;
const int CAP2 = 15;

int main()
{
	srand(time(0));
	int randNrs[CAP2];
	int userNr=0, pos = -1;
	bool found = false;

	//fyll array randNrs med slup tal [10...99]
	for (int i = 0; i < CAP2; i++)
	{
		randNrs[i] = rand() % 90 + 10;
	}

	//använd matar in ett tal inom [10...99]
	cout << "vilket tall söker du [10...99]?? ";
	cin >> userNr;
	//bestäm första förekomsten av användraen tal

	/*
		for (int i = 0; i < CAP2 && exist; i++)
	{
		if (randNrs[i] == userNr)
		{
			exist = true;
			pos = i;
			cout << userNr << " exist at index: " << i << endl;
		}
		else
		{
			cout << userNr << " dose not exist =("<<endl;
		}
	}
	*/

	// betty
	for (int i = 0; i < CAP2 && !found; i++)
	{
		if (randNrs[i] == userNr)
		{
			
			pos = i;
			found = true;
		}
		
	}

	//och presentera var:
	if (found)
		cout << "första förekomsten av " << userNr << "var på position " << pos << endl;
	else
		cout << userNr << "Dose not exist!!" << endl;



	double nrsOne[CAP] = {};
	double nrsTwo[CAP] = {};
	

	cout << "nrsOne = " << nrsOne << endl;
	cout << "nrsTwo = " << nrsTwo << endl;

	if (nrsOne == nrsTwo) //gemför adresernma i arratvariablerna.
	{

	}

	// användaren matar in flyttal till nrsOne

	for (int i = 0; i < CAP; i++)
	{
		cout << "Enter Array 1 " << i << "nr: ";
		cin >> nrsOne[i];
	}
	// användaren matar in flyttal till nrsTwo

	for (int i = 0; i < CAP; i++)
	{
		cout << "Enter Array 2 " << i << "nr: ";
		cin >> nrsTwo[i];
	}
	// avgör om nrsOne och nrsTwo är lika eller ej
	/*
	bool isEqual = true;
	int i = 0;
	while (isEqual!=false)
	{

		if (nrsOne[i] != nrsTwo[i])
			isEqual = false;


		i++;
	}
	if (isEqual == true)
		cout << "nrsOne == nrsTwo" << endl;
	else
		cout << "nrsOne != nrsTwo" << endl;
	*/
	bool isEqual = true;
	for (int i = 0; i < CAP&&isEqual; i++)
	{
		if (nrsOne[i] != nrsTwo[i])
			isEqual = false;
	}


	//Blanda kort

	string words[CAP2];
	string temp = "0", userInput="0";
	int index = 0, rand1 = -1, rand2 = -1;
	//användaren mattar in max 15 ord användaren avslutar genom att mata in retur 
	cout << "enter a word: ";
	getline(cin, userInput);
	while (userInput != "" && index<CAP2)
	{
		words[index] = userInput;
		cout << "enter a word: ";
		getline(cin, userInput);
		index++;
	}
	for (int h = 0; h < CAP2; h++)
	{
		rand1 = rand() % 16;
		rand2 = rand() % 16;

		temp = words[rand1];
		words[rand1] = words[rand2];
		words[rand2] = temp;
	}
		
	//blanda genom att slumpa två heltal och bytta plats på dem


	system("pause");
	return 0;
}
