#include <iostream>

using namespace std;

template <typename T>
void selectionsort(T theArray[], int theCapacity);

template <typename T>
void printContent(T theArray[], int theCap);

int main()
{
	int nrs[] = { 99,22,66,77,35,25,15,68 };
	string words[] = { "hej","då","din", "apa" };

	printContent(nrs, 8);
	cout << endl <<endl;
	
	selectionsort(nrs, 8);
	printContent(nrs, 8);

	cout << endl << endl;

	system("pause");
	return 0;
}

template <typename T>
void selectionsort(T theArray[], int theCapacity)
{

	int posOfSmalest = 0;

	for (int i = 0; i < theCapacity - 1; i++)
	{

		posOfSmalest = i;

		for (int h = i + 1; h < theCapacity; h++)
		{

			if (theArray[h] < theArray[posOfSmalest])
			{

				posOfSmalest = h;

			}
		}
		
		T temp = theArray[i];
		theArray[i] = theArray[posOfSmalest];
		theArray[posOfSmalest] = temp;
	
	}

}


template <typename T>
void printContent(T theArray[], int theCap)
{

	for (int i = 0; i < theCap; i++)
	{
		cout << theArray[i] << " ";

	}

}
