#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//5. Skapa ett array med plats f�r 15 heltal och slumpa f�r dessa 15 platser
//ett heltal mellan 0 och 50. Ber�kna sedan summan av de heltal som ligger
//p� j�mna index - positioner f�r sig och summan av de heltal som ligger p�
//udda index - positioner f�r sig.D�refter presenteras de b�da summorna.

const int CAP = 15;

int main()
{
	srand(time(0));
	int numbers[CAP];
	int evenTotal = 0, uddTotal=0;

	for (int i = 0; i < CAP; i++)
	{
		numbers[i] = rand() % 51;
		cout << numbers[i] << ", ";
		if (i % 2 == 0)
		{
			evenTotal += numbers[i];
		}
		else
		{
			uddTotal += numbers[i];
		}
	}

	cout <<endl << "Even: "<<evenTotal << " odd: " << uddTotal << endl << endl;
	system("pause");
	return 0;
}