#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

const int CAP = 5;
const int CAP_TWO = 25;
const int CAP_TRE = 15;
const int CAP_FOUR = 30;

int main()
{

	/*5. G�r ett program i vilket anv�ndaren matar in flyttal till tv� arrayer, b�da med kapaciteten 5.
	D�refter kontrolleras(genom anv�ndande av iteration) om inneh�llet i arrayerna �r lika.Resultatet presenteras som en utskrift.*/

	/*

	double nrsOne[CAP];
	double nrsTwo[CAP];
	bool isEqual = true;

	for (int i = 0; i < CAP; i++)
	{
		cout << "enter a decimal array1: ";
		cin >> nrsOne[i];

		cout << "enter a decimal array2: ";
		cin >> nrsTwo[i];
	}

	for (int i = 0; i < CAP && isEqual ; i++)
	{
		if (nrsOne[i] != nrsTwo[i])
		{
			isEqual = false;
			cout << "i = " << i<<endl;
		}
	}

	if (isEqual)
	{
		cout << "Array 1 and arry two is equal" << endl;
	}
	else
	{
		cout << "Array 1 and arry two is not equal" << endl;
	}
	*/
	//**********************************************************************

	/*6.G�r ett program som fyller en array med slumpade heltal inom intervallet[10..99].D�refter matar anv�ndaren in ett heltal inom intervallet[10..99]
	och programmet ska presentera var(vilken position) den f�rsta f�rekomsten av detta heltal finns.Om det inte finns ska detta meddelas.*/

	/*
	int number[CAP_TWO] = {};
	srand(time(0));
	int nr = 0;
	int index = -1;


	cout << "Enter a integer plz [10...99]";
	cin >> nr;
	// fyll array med numbers
	for (int i = 0; i < CAP_TWO; i++)
	{

		number[i] = rand() % 89 + 10;
		cout << number[i] << ", ";

	}
	cout << endl << endl;
	for (int i = 0; i < CAP_TWO && index==-1; i++)
	{
		if (number[i] == nr)
		{
			index = i;
		}
	}
	if (index != -1)
		cout << "your number: " << nr << "was at posion: " << index << endl;

	else
		cout << "It wasent there!!"<<endl;
	*/

	/*7. G�r ett program d�r anv�ndaren matar in ord(max 15) vilka placeras i en array.N�r anv�ndaren trycker <enter> i st�llet f�r att mata in ett ord avslutas inmatning.
	Alla ord som anv�ndaren matat in presenteras.D�refter blandas orden och inneh�llet i arrayen presenteras igen.
	*/

	
	
	srand(time(0));
	string userInput = "Yulia";
	string words[CAP_TRE];
	int count = 0;
	int chuffleOne = -1, chuffleTwo = -1, chuffleCount = 50;



	cout << "Hello there enter a word pliz: ";
	getline(cin, userInput);
	words[count] = userInput;
	count++;
	while (userInput != "" && count<CAP_TRE)
	{
		cout << "Enter more words word pliz: ";
		getline(cin, userInput);
		words[count] = userInput;
		count++;
	}

	for (int i = 0; i < CAP_TRE; i++)
	{

		if (words[i] != "")
		{
			cout << words[i] << ", ";
		}
	}

	cout << endl << "Now we will chuffle lyour words :P" << endl<<endl;

	for (int i = 0; i < CAP_TRE*3; i++)
	{
		string temp;
		chuffleOne = rand() % CAP_TRE;
		chuffleTwo = rand() % CAP_TRE;
		
		temp = words[chuffleOne];
		words[chuffleOne] = words[chuffleTwo];
		words[chuffleTwo] = temp;
	}

	for (int i = 0; i < CAP_TRE; i++)
	{

		if (words[i] != "")  
		{
			cout << words[i] << ", ";
		}
	}
	cout << endl << endl;
	

	/*
	8.G�r ett program som fyller en array med kapaciteten 10 med slumpade tal inom intervallet [1..30] med kravet att inga dubbletter f�r f�rekomma.
	Skriv d�refter ut alla tal som finns i arrayen. Presentera dessutom det st�rsta och det minsta heltalet.
	*/

/*int randNummer[CAP_FOUR];
int count = 0, bigNr, miniNr;
int nyRandNr = 0, doubleCount=0;
srand(time(0));

randNummer[0] = rand() % 30 + 1;

while(count<CAP_FOUR)
{
	nyRandNr = rand() % 30 + 1;

	for (int h = 0; h < CAP_FOUR; h++)
	{


		//denna if-satsen kollar om talet finns i position i
		if (randNummer[h] == nyRandNr)
			doubleCount++;// om talet redan finns s� plus 1

	}
	//om double count �r st�re �n noll �r det dubbleter
	if (doubleCount <= 0)
	{
		randNummer[count] = nyRandNr;
		count++;
	}
	doubleCount = 0;
}
for (int i = 0; i < CAP_FOUR; i++)
	cout << randNummer[i] << ", ";

bigNr = randNummer[0];
for (int i = 1; i < CAP_FOUR; i++)
{
	if (randNummer[i]>bigNr)
	{
		bigNr = randNummer[i] ;
	}
}
miniNr = randNummer[0];
for (int i = 1; i < CAP_FOUR; i++)
{
	if (randNummer[i]<miniNr)
	{
		miniNr = randNummer[i];
	}
}
cout << endl << "Smalest number was: " << miniNr << endl << "Largest number was: " << bigNr;

*/
cout << endl << endl;
	system("pause");
	return 0;
}