
#include <string>
#include "HeaderTest.h"
using namespace std;



int main()
{
	//defult argumen: v�rden i en parameterlista som anv�nds om det inte "finns" n�got argument 
	string phrase = "Hej och h�";
	int counter = 5;

	printString(phrase, counter);
	printString();
	system("pause");
	return 0;
}

