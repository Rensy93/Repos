#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Skapa ett array av storlek 20 vilket ska anv�ndas f�r flyttal.L�t
//anv�ndaren mata in ett antal(<= 20) och fyll d�refter arrayen fr�n
//position 19 och vidare mot position 0, med s� m�nga slumpade tal som
//anv�ndaren angivit.Skriv ut dessa tal.

const int CAP = 20;

int main()
{
	srand(time(0));
	double numbers[CAP];
	double nrs = 0;
	int nrCount = 0;

	for (int i = 0; i < CAP && nrs!=-1; i++)
	{
		cout << "Enter a Decimal number: ";
		cin >> nrs;
		if (nrs != -1)
		{
			numbers[i] = nrs;
			nrCount++;
			cout << numbers[i] << ", ";
		}
		

	}
	for (int i = CAP-1; i >= nrCount; i--) 
	{
		numbers[i] = rand() % 100;
	}

	for (int i = 0; i < CAP; i++)
	{
		cout << numbers[i] << ", ";
	}

	system("pause");
	return 0;
}