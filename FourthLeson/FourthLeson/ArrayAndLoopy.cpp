#include <iostream>
#include <string>

using namespace std;

int main()
{
	// vi ska deklarera en array för heltal med kapasiteten 8 benämd numbers
	int number[8];

	//Användare matar in ett nummer på plast noll

	cout << "enter your favorit number: ";
	cin >> number[0];

	// lägg värde noll på resterande platser i arrayen

	for (int i = 1; i < 8; i++)
		number[i] = (i)*10;
		
	
	for (int i = 0; i<8;i++)
		cout << "nr" << i << " is " << number[i] << endl;






	system("pause");
	return 0;
}
