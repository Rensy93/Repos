#include "Yatzee.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int nrOfPlayers=0;

	cout << "Hur m�nga ska vara med och spela? ";
	cin >> nrOfPlayers; cin.ignore();

	//Skapa ett Yatzee-objekt baserat p� nrOfPlayers
	
	//L�t anv�ndaren mata in namnen p� spelarna och l�gg till spelarna till Yatzee-objektet
	
	//S� l�nge som inte alla spelare har spelat klart
	
		//Presentera protokollet f�r aktuell spelare
		
		//Kasta en omg�ng t�rningar
		
		//Upprepa 2 g�nger

			//Visa t�rningarnas utfall
			
			//L�t anv�ndaren mata in vilket t�rningsv�rde som ska sparas
			
			//Kasta alla �vriga t�rningar
		
		//Visa t�rningarnas utfall
		
		//L�t anv�ndaren mata in vilket t�rningsv�rde resultatet ska sparas p�
	
		//S� l�nge som t�rningsv�rdet redan �r ifyllt	
	
			//L�t anv�ndaren mata in vilket t�rningsv�rde resultatet ska sparas p�
		
		//Presentera protokollkolumnen f�r aktuell spelare	
		
		//N�sta spelares tur

		//Rensa sk�rmen och pausa
	
	//Presentera protokollkolumnen och totalsumman f�r varje spelare
	
	system("pause");
	return 0;
}