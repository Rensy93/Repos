#include "IceCreamEvaluation.h"
#include <iostream>

//prototypes
int menu();
int findIceCream(IceCreamEvaluation iceCreams[], int nrOfIceCream);
void expandArray(IceCreamEvaluation *&iceCreams, int &iceCreamCap);
void addIceCream(IceCreamEvaluation iceCreams[], int &nrOfIceCream, int &iceCreamCap);



int main()
{
	IceCreamEvaluation *IceCreams = nullptr;
	int IceCreamsCap = 20;
	int userChoice = 1, nrOfIceCream = 0;
	IceCreams = new IceCreamEvaluation[IceCreamsCap];

	while (userChoice != 0)
	{

		userChoice = menu();

		switch (userChoice)
		{
		case 1:
		{

			addIceCream(IceCreams, nrOfIceCream, IceCreamsCap);

		}
		default:
			break;
		}


	}


	delete[] IceCreams;

	system("pause");
	return 0;
}


//Declarations

int menu()
{
	int userChoice = -1;

	cout << "1. Add new iceCream" << endl
		<< "2. Show all results" << endl
		<< "0. quit" << endl
		<< "Your Choice: ";

	cin >> userChoice; cin.ignore();

	return userChoice;

}

int findIceCream(IceCreamEvaluation iceCreams[], string name, int nrOfIceCream)
{

	IceCreamEvaluation temp(name);
	int pos = 0;

	for (int i = 0; i < nrOfIceCream && pos == -1 ; i++)
	{

		if (iceCreams[i] == temp)
		{

			pos = i;

		}

	}

	return pos;

}

void expandArray(IceCreamEvaluation *&iceCreams, int &iceCreamCap)
{

	IceCreamEvaluation *tempArray;
	tempArray = new IceCreamEvaluation[iceCreamCap];

	for (int i = 0; i < iceCreamCap; i++)
	{

		tempArray[i]=iceCreams[i];

	}



}

void addIceCream(IceCreamEvaluation iceCreams[], int &nrOfIceCream, int &iceCreamCap);