#include <iostream>
#include <cstdlib>
//#include <ctime>
//#include <string>
#include "sortAnArrayHeader.h"

using namespace std;


void userInput(int &amunt)
	{
		cout << "How menny numbers do you want: ";
		cin >> amunt;
	}

void fillAnArray(int theArray[], int theCap)
{

	for (int i = 0; i < theCap; i++)
	{
		
		bool isDuplicated = true;
		
		while (isDuplicated)
		{
			
			isDuplicated = false;

			int temp = rand() % theCap*2 + 1;

			for (int h = 0; h < theCap && !isDuplicated; h++)
			{

				if (temp == theArray[h])
					isDuplicated = true;

			}
		
			if (!isDuplicated)
				theArray[i] = temp;

		}
		

	}

}

void sortArray(int theArray[], int theCap)
{
	int smallestPos, temp;

	for (int i = 0; i < theCap; i++)
	{
		smallestPos = i;
		for (int h = smallestPos; h < theCap; h++)
		{

			if (theArray[h] < theArray[smallestPos])
			{
					
				temp = theArray[h];
				theArray[h] = theArray[smallestPos];
				theArray[smallestPos] = temp;

			}

		}

	}

}

void printAnArray(int theArray[], int theCap)
{

	for (int i = 0; i < theCap; i++)
	{

		cout << theArray[i] << " ";

	}
	cout << endl;
}