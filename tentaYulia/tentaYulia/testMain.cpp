#include"Rect.h"
#include"Cirkel.h"

#include<iostream>


using namespace std;
int main()
{
	//Skapa en array med plats för 5 pekare av basklasstyp.

	GeoFig* figurerArr[5];

	//Skapa två Circle - objekt och tre Rectangle - objekt blandade i arrayen.

	figurerArr[0] = new Rect(5, 5, 5, 5);
	figurerArr[1] = new Cirkel(1, 2, 5.1);
	figurerArr[2] = new Cirkel(8, 6, 10.1);
	figurerArr[3] = new Rect(7, 9, 3, 2);
	figurerArr[4] = new Rect(7, 9, 3, 2);

	//Presentera resultatet av toString() för alla objekten i arrayen. 
	for(int i = 0; i < 5; i++)
	{
		cout << figurerArr[i]->toStringSpec() << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		Cirkel* temp;
		temp = dynamic_cast<Cirkel*>(figurerArr[i]);
			if (temp != nullptr)
			{
				temp->changeRadien(55);

			}
	}

	//Presentera resultatet av toString() för alla Cirkel-objekt i arrayen. 
	for (int i = 0; i < 5; i++)
	{
		Cirkel* temp;
		temp = dynamic_cast<Cirkel*>(figurerArr[i]);
		{
			if (temp != nullptr)
			{
				cout<<temp->toStringSpec() << endl;
			}
		}
	}
	system("pause");
	return 0;
}