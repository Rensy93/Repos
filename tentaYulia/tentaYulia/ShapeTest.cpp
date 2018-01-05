#include"Cone.h"
#include"Parral.h"
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
const int cap = 5;
int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// Skapa en statiskt allokerad array inneh�llande 5 pekare av basklasstyp.
	Geom *figurer[cap];
	for (int i = 0; i < cap; i++)
	{
		figurer[i] = nullptr;
	}

	// Skapa 2 kon-objekt och 2 l�d-objekt, vilka pekas ut fr�n arrayen.

	figurer[0] = new Cone(5, 6.5);
	figurer[1] = new Parral(5, 6, 7);
	figurer[2] = new Cone(7, 9.5);
	figurer[3] = new Parral(5, 9, 7);
	int nrOf = 4;

	// Tillse att volymen f�r alla geometriska figurerna presenteras p� bildsk�rmen

	for (int i = 0; i < nrOf; i++)
	{
		cout << figurer[i]->getVol() << endl;
	}
	// Blanda koner och l�dor i arrayen(tips: slumpa 5 g�nger 2 positioner i intervallet 0 t.o.m 3).
	int nr1 = 0;
	int nr2 = 0;
	for (int i = 0; i < nrOf; i++)
	{
		nr1 = rand() % 4;
		nr2 = rand() % 4;
		Geom *temp;
		temp = figurer[nr1];
		figurer[nr1] = figurer[nr2];
		figurer[nr2] = temp;
	}

	//. �ndra radien f�r de 2 kon-objekten till 5. Detta ska g�ras utan att positionerna f�r de pekare som
	//pekar ut kon - objekten fr�n arrayen �r k�nda.
	Cone *temp;
	for (int i = 0; i < nrOf; i++)
	{
		temp = dynamic_cast<Cone*>(figurer[i]);
		if (temp != nullptr)
		{
			temp->setRadie(5);
		}
	}

	// Tillse att volymen f�r endast kon-objekten presenteras p� bildsk�rmen.

	for (int i = 0; i < nrOf; i++)
	{
		temp = dynamic_cast<Cone*>(figurer[i]);
		if(temp!=nullptr)
		{
			cout<<temp->getVol() << endl;
		}
	}

	for (int i = 0; i < cap; i++)
	{
		delete figurer[i];
		figurer[i] = nullptr;
	}
	
	//Tillse att inga minnesl�ckor finns n�r testprogrammet avslutas.
	system("pause");
	return 0;
}