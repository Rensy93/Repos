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
	// Skapa en statiskt allokerad array innehållande 5 pekare av basklasstyp.
	Geom *figurer[cap];
	for (int i = 0; i < cap; i++)
	{
		figurer[i] = nullptr;
	}

	// Skapa 2 kon-objekt och 2 låd-objekt, vilka pekas ut från arrayen.

	figurer[0] = new Cone(5, 6.5);
	figurer[1] = new Parral(5, 6, 7);
	figurer[2] = new Cone(7, 9.5);
	figurer[3] = new Parral(5, 9, 7);
	int nrOf = 4;

	// Tillse att volymen för alla geometriska figurerna presenteras på bildskärmen

	for (int i = 0; i < nrOf; i++)
	{
		cout << figurer[i]->getVol() << endl;
	}
	// Blanda koner och lådor i arrayen(tips: slumpa 5 gånger 2 positioner i intervallet 0 t.o.m 3).
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

	//. Ändra radien för de 2 kon-objekten till 5. Detta ska göras utan att positionerna för de pekare som
	//pekar ut kon - objekten från arrayen är kända.
	Cone *temp;
	for (int i = 0; i < nrOf; i++)
	{
		temp = dynamic_cast<Cone*>(figurer[i]);
		if (temp != nullptr)
		{
			temp->setRadie(5);
		}
	}

	// Tillse att volymen för endast kon-objekten presenteras på bildskärmen.

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
	
	//Tillse att inga minnesläckor finns när testprogrammet avslutas.
	system("pause");
	return 0;
}