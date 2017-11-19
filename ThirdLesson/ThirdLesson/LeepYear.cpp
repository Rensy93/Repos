/*
Gör ett program med vilket användaren matar in ett årtal och
programmet avgör och meddelar om årtalet är ett skottår eller ej.
Ett år är ett skottår om året är delbart med 4 men ej med 100. Dock är
år delbara med 400 skottår.
Exempel på skottår är 1988, 1992 och 2000. År 1800 respektive 1900 är
ej skottår.
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

