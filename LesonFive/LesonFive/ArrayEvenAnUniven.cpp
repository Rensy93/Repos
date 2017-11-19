#include <iostream>
#include <cstdlib>
#include <ctime>

//4. Skapa ett array med plats för 20 heltal och slumpa dessa i intervallet
//1...100.Bestäm på vilken position det största heltalet finns och
//presentera både positionen och värdet

using namespace std;

const int CAP = 20;

int main()
{
	srand(time(0));
	int nr[CAP];
	int largest = 0, pos=-1;


	for (int i = 0; i < CAP; i++)
	{
		nr[i] = rand()%100+1;
		cout << nr[i] << ", ";
		if (nr[i]>largest)
		{
			largest = nr[i];
			pos = i;
		}
	}
	cout << endl << "posionen " << pos << " numret var: " << largest << endl << endl;

	system("pause");
	return 0;
}