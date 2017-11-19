#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;
const int CAP = 5;


int main()
{
	srand(time(0));
	int numbers[CAP];
	int sum = 0;

	for (int i = 0; i < CAP; i++)
		numbers[i] = i * 10;

	for (int i = 0; i < CAP; i++)
		cout << numbers[i] << endl << "**************" << endl;

	//Slumapa heltal för all indexerade variabler med jämnt index
	

	/*
	for (int i = 0; i < CAP; i++)
	{
		if (i % 2 == 0)
			numbers[i] = rand() % 90 + 10;

		cout << numbers[i] << endl;
	}
	*/

	//Betys lösning

	for (int i = 0; i < CAP; i += 2)
	{
		numbers[i] = rand() % 90 + 10;
		cout << numbers[i] << endl<<"**************"<<endl;
	}
	
	// Summera alla jämmna tal



	for (int i = 0; i < CAP; i++)
	{
		if (numbers[i] % 2 == 0)
			sum += numbers[i];
		
	}
	cout << sum << endl << "**************" << endl;


	//Bytta plats på först och sist;

	int temp=numbers[0];
	cout <<"plats 0 = "<< numbers[0] << " och plats 4 =" << numbers[CAP - 1]<<endl<<endl;

	numbers[0] = numbers[CAP - 1];
	numbers[CAP - 1] = temp;
	
	cout << "plats 0 = " << numbers[0] << " och plats 4 =" << numbers[CAP - 1] << endl << endl;

	system("pause");
	return 0;
}