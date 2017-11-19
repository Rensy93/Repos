#include "sortAnArrayHeader.h";
#include <string>
#include <iostream>
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));
	int *randomNummbers = nullptr;
	int size=0;

	userInput(size);//bestämmer storleken på arrayen
	
	randomNummbers = new int [size];//alockerar minne för arrayen

	fillAnArray(randomNummbers, size);//fyller arrayen.

	//skriver ut "orginal" arrayen
	cout << "original array:" << endl;
	printAnArray(randomNummbers, size);

	sortArray(randomNummbers, size);//sorterar den 

	//skriver ut den sorterade arrayen
	cout << "I havge sorted your array: " << endl;
	printAnArray(randomNummbers, size);

	delete[] randomNummbers;
	
	system("pause");
	return 0;
}
