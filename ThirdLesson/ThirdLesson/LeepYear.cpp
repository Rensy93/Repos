/*
G�r ett program med vilket anv�ndaren matar in ett �rtal och
programmet avg�r och meddelar om �rtalet �r ett skott�r eller ej.
Ett �r �r ett skott�r om �ret �r delbart med 4 men ej med 100. Dock �r
�r delbara med 400 skott�r.
Exempel p� skott�r �r 1988, 1992 och 2000. �r 1800 respektive 1900 �r
ej skott�r.
*/

#include <iostream>

using namespace std;

int main()
{
	int year = 0;
	cout << "eneter a year that you wannt to check if it's a leepyear: ";
	cin >> year;

	if (year % 4 == 0 && year %100>0 || year % 400 == 0 )
		cout << year << " =leepyear!";
	else
		cout << year << " is not a leep year!";


	system("pause");
	return 0;
}

