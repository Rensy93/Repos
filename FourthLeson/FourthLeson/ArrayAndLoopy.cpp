#include <iostream>
#include <string>

using namespace std;

int main()
{
	// vi ska deklarera en array f�r heltal med kapasiteten 8 ben�md numbers
	int number[8];

	//Anv�ndare matar in ett nummer p� plast noll

	cout << "enter your favorit number: ";
	cin >> number[0];

	// l�gg v�rde noll p� resterande platser i arrayen

	for (int i = 1; i < 8; i++)
		number[i] = (i)*10;
		
	
	for (int i = 0; i<8;i++)
		cout << "nr" << i << " is " << number[i] << endl;






	system("pause");
	return 0;
}
