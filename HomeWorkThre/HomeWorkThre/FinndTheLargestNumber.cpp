#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//Gör ett program som slumpar 10 heltal och skriv ut dessa i tur och
//ordning och avslutar med att skriva ut det största av de slumpade
//heltalen.



int main()
{
	/*int i=0, largestNummber = 0, number[10]; 
	srand(time(0));

	while (i<10)
	{
		number[i] = rand() % 10 + 1;
		cout << number[i] << endl << "********" << endl;
		if (number[i] > largestNummber)
			largestNummber = number;

		i++;
	}
	
	cout << "Det största nummret är: " <<largestNummber<<endl;*/
	int i = 0, temp = 0, temp2;
	srand(time(0));
	int ett = rand()%100+1, tva = rand() % 100 + 1, tre = rand() % 100 + 1, fyra = rand() % 100 + 1, fem = rand() % 100 + 1;
	//int ett = 5, tva = 4, tre = 3, fyra = 2, fem = 1;
	cout << "tal ett: " << ett << endl << "tal tva: " << tva << endl << "tal tre: " << tre << endl
		<< "tal fyra: " << fyra << endl << "tal fem: " << fem << endl << endl;

	while (i < 10)
	{
		if (ett > tva)
		{


			temp = ett;
			ett = tva;
			tva = temp;
		}

		if (tva > tre)
		{


			temp = tva;
			tva = tre;
			tre = temp;
		}
		if (tre > fyra)
		{


			temp = tre;
			tre = fyra;
			fyra = temp;
		}
		if (fyra > fem)
		{


			temp = fyra;
			fyra = fem;
			fem = temp;
		}

		i++;
	}
	cout << "tal ett: " << ett << endl << "tal tva: " << tva << endl << "tal tre: " << tre << endl
		<< "tal fyra: " << fyra << endl << "tal fem: " << fem << endl
		<< "Största talet är: " << fem << endl;
	
	system("pause");
	return 0;
}