#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

////en funktion som summerar två heltal och return svaret
//int adition(int a, int b);
////en funktion so  skriver ut en sträng 3ggr
//void printThree(string thePhrase);
////en funktion som skriver ut en sträng ett antal ggr
//void printNumberOftimes(string thePhrashe, int times);
//

int menu();
double runingOmkrets(int radie);
double runingArea(int radie);
int rektangleOmkrets(int bas, int höjd);
int rektangleArea(int bas, int höjd);

/*en funktion som presenterar en meny

1.runing
2.rektangel
3. Avslute
ditt val:

*/

int main()

{
	/*int nrs1=0, nrs2=0, result=0; // locala variabler
	cout << "enter two numbers: ";
	cin >> nrs1;
	cin >> nrs2; cin.ignore();

	result=adition(nrs1, nrs2);
	cout <<nrs1<<"+"<<nrs2<<"="<<result<<endl;

	//tre ggr;
	string phrese;
	printThree("c++ is fun!!");
	cout << "enter a phrese: ";
	getline(cin, phrese);
	printThree(phrese);

	//x antal ggr
	int nrTimes;
	cout << "enter a phrese: ";
	getline(cin, phrese);
	cout << "enter a amunt of times: ";
	cin>>nrTimes;
	printNumberOftimes(phrese, nrTimes);*/
	
	//meny
	int playerChoise = 0;
	
	while (playerChoise!=3)
	{
		
		playerChoise = menu();

		switch (playerChoise)
		{
		case 1:
		{
			//runing
			int radie;
			double cirkelArea, cirkelOmkrets;
			
			cout << "vad är radien: ";
			cin >> radie; cin.ignore();
			cirkelArea = runingArea(radie);
			cirkelOmkrets = runingOmkrets(radie);
			cout << "om radien var = " << radie << " och omkretsen = " 
				<< cirkelOmkrets << " så är arean = " << cirkelArea <<endl;
			break;
		}
		case 2:
		{

			int bas, höjd;
			int rekOmkrets, rekArea;
			cout << "vad är basen: ";
			cin >> bas;
			cout << "vad är höjden: ";
			cin >> höjd;
			rekArea = rektangleArea(bas, höjd);
			rekOmkrets = rektangleOmkrets(bas, höjd);
			cout << "om basen var = " << bas<<" och hojden var "<<höjd << " så är omkretsen = "
				<< rekOmkrets << " så är arean = " << rekArea << endl;
			break;
		}
		case 3:
		{
			//quit;
			//playerChoise = 3;
			cout << endl;
			break;
		}
		default:
			cout << "Ajaj vad gör du dumbum"<<endl;
			break;
		}
		
	}




	system("pause");
	return 0;
}

/*int adition(int nrsOne, int nrsTwo)//nrsOne och nrsTwo är också locala variabler
{
	int result = 0; //lokala variabler i funktionen

	result = nrsOne + nrsTwo;

	return result;
}*/

/*void printThree(string thePhrase)
{
	for (int i = 0; i < 3; i++)
		cout << thePhrase;
 
	cout << endl;
}*/

/*void printNumberOftimes(string thePhrashe, int times)
{
	for (int i = 0; i < times; i++)
		cout << thePhrashe << " ";

	cout << endl;

}*/

//Funktions
int menu()
{
	int playerChoice;
	cout << "1.runing" << endl
		<< "2.rektangel" << endl
		<< "3. Avslute" << endl
		<< "ditt val: ";
	cin >> playerChoice; cin.ignore();

	return playerChoice;
}

double runingArea(int radie)
{
	double area;
	area = 3.14*pow(radie,2);
	//area = 3.14*radie*radie;
	return area;
}

double runingOmkrets(int radie)
{
	double omkrets;

	omkrets = 2 * radie*3.14;

	return omkrets;
}

int rektangleOmkrets(int bas, int höjd)
{
	int omkrets;
	omkrets = (2 * bas) + (2 * höjd);
	return omkrets;
}

int rektangleArea(int bas, int höjd)
{
	int area;
	area = bas * höjd;
	return area;

}

