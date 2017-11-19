#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int CAP = 10;


int main()
{
	srand(time(0));
	int nrRand[CAP] = {};
	int nrMulti[CAP] = {};
	int multiplikationFaktor=9;

	for (int i = 0; i < CAP; i++)
	{
		nrRand[i] = rand() % 11;
		cout << nrRand[i] << ", ";
	}
	cout << "\nenter the multplikation faktor ";
	cin >> multiplikationFaktor; 

	for (int i = 0; i < CAP; i++)
		nrMulti[i] = nrRand[i] * multiplikationFaktor;

	for (int i = 0; i < CAP; i++)
		cout<<nrMulti[i]<<" ,";

	cout << endl << endl;
	system("pause");
	return 0;
}