
#include <string>
#include "HeaderTest.h"
using namespace std;



int main()
{
	//defult argumen: värden i en parameterlista som används om det inte "finns" något argument 
	string phrase = "Hej och hå";
	int counter = 5;

	printString(phrase, counter);
	printString();
	system("pause");
	return 0;
}

