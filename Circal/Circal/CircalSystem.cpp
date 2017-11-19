#include "Circal.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void addCircles(int nrOfcirkle, Circal circles[]);
void ShowAllCirclar(int nrOfCircales, Circal circals[]);
void moveAllCircales(int nrOfCircales, Circal circals[]);
int findCircal(int nrOfCircales, Circal circals[],const Circal &userCircal);


int main()
{
	locale swedish("swedish");
	locale::global(swedish);

	int capasity = 0, nrOfCircales = 0, expand = 0;
	Circal *circals = nullptr;
	Circal *circalsTemp = nullptr;

	//vectorer
	vector<int> intVect;//cap tio perdifult
	vector<Circal> circalVect(3);//kapasitet 3

	for (int i = 0; i < 5; i++)
	{
		intVect.push_back(i*10);
	}
	//användaren mattar in arayyens capasitans
	cout << "Enter amunt off circals you want: ";
	cin >> capasity; cin.ignore();

	//allokera en array dyn för cirklar som är av denna kapacitansen

	circals = new Circal[capasity];

	//användaren mattar in antalet cirklar som ska placeras i arrayen
	
	cout << "Enter the numer of circals you want to enter ";
	cin >> nrOfCircales; cin.ignore();

	//användraen mattar in radien för det anntalet cirklar
	//skapar och placeras i arrayen
	addCircles(nrOfCircales, circals);

	//visa alla ice-defult cirklar
	ShowAllCirclar(nrOfCircales, circals);


	//användaren matar in x och y koordinater för alla ickedefultcirklar cirklar
	//vilket flyttas endligt dessa koordinator

	moveAllCircales(nrOfCircales, circals);

	//vissa alla icke def cirklar
	ShowAllCirclar(nrOfCircales, circals);

	//expandera arrayen med det antal som användaren anger.
	cout << "hur mycket vill du expandera med: ";
	cin >> expand; cin.ignore();
	circalsTemp = new Circal[capasity + expand];

	//användaren vattar in amtalet (expandSize)

	//Allokerar en ny array men önskad

	//kopiera cirklarna till cirkelarray

	for (int i = 0; i < capasity; i++)
	{

		circalsTemp[i] = circals[i];

	}


	//avalokera arrayen från cirkel-parkaren

	delete[] circals;
	
	// ge cirklen-pekaren adressen som den temporära pakaren har

	circals = circalsTemp;

	//ge den temporära pekaren nullptr
	circalsTemp = nullptr;
	//uppdarrrera capasity;
	capasity += expand;
	/*
	void expand(Circle *&circles, int &cap, expandNr) arrayen moste vara en pointer referens (&*)
	{

		temp[störeArray]

		kopiera array -> temp

		delete[] circ

		circ tildelar temp

		cap+=expandNr;

	}
	
	kallar funktion;
	expand(circles, capacity)

	*/


	//användaren mattar in radien, x och y för en cirkel som ka skapas
	//och kontrulera on en sådan cirkel rednan finns samt medela vikket
	int radius, x, y;


	cout << "enter radius: ";
	cin >> radius; cin.ignore();

	cout << "enter x: ";
	cin >> x; cin.ignore();

	cout << "enter y: ";
	cin >> y; cin.ignore();

	Circal userCircal(radius, x, y);

	int pos = findCircal(nrOfCircales, circals, userCircal);
	//etc
	delete[] circals;
	circals = nullptr;
	system("pause");
	return 0;
}

void addCircles(int nrOfcirkle, Circal circles[])
{
	int radius = 0;
	for (int i = 0; i < nrOfcirkle; i++)
	{

		cout << "Enter a radius ";
		cin >> radius; cin.ignore();
		circles[i] = Circal(radius);

	}


}

void ShowAllCirclar(int nrOfCircales, Circal circals[])
{

	for (int i = 0; i < nrOfCircales; i++)
	{

		cout << "circal " << i << " " << circals[i].toString() << endl;

	}
	

}

void moveAllCircales(int nrOfCircales, Circal circals[])
{
	int x = 0, y = 0;
	
	

	for (int i = 0; i < nrOfCircales; i++)
	{

		cout << "enter the new x koordinate: ";
		cin >> x; cin.ignore();

		cout << "enter the new y koordinate: ";
		cin >> y; cin.ignore();

		circals[i].move(x, y);

	}
}

int findCircal(int nrOfCircales, Circal circals[], const Circal &userCircal)
{
	int pos = -1;

	for (int i = 0; i < nrOfCircales; i++)
	{

		if (circals[i]==userCircal)
		{

			pos = i;

		}

	}
	

	return pos;

}