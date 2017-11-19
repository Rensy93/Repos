#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
const int CAP=8;


int main()
{
	srand(time(0));
	int nrPhreses = 8;
	int chuffleOne = -1, chuffleTwo = -1;
	string phresesTemp="";
	string phreses[CAP] = { "Det blir inte alltid som man vill",
							"I morgon blir det fint väder",
							"Kasta inte glas i stenhus",
							"Ät inte den gula snön",
							"Din bror är din pappas son",
							"Efter solsken kommer regn",
							"Gå inte över ån efter vatten",
							"Skjut inte björnen förrän skinnet är sålt"
						 };
	int userInput = -1;
	while (nrPhreses > 0)
	{
		for (int i = 0; i < CAP * 2; i++)
		{
			chuffleOne = rand() % nrPhreses;
			chuffleTwo = rand() % nrPhreses;
			phresesTemp = phreses[chuffleOne];
			phreses[chuffleOne] = phreses[chuffleTwo];
			phreses[chuffleTwo] = phresesTemp;
		}

		for (int i = 0; i < nrPhreses; i++) {
			cout << i+1 << ": " << phreses[i] << endl;
		}

		cout << "Shose a cooki between 1-" << nrPhreses << ": ";
		cin >> userInput;
		if (userInput <= nrPhreses)
		{
			cout << phreses[userInput-1] << endl;
			
			for (int i = userInput; i < nrPhreses-1; i++)
			{
				phreses[i] = phreses[i+1];

			}

			nrPhreses--;
		}
		else
		{
			cout << "You don't have that meny cookis :'(" << endl;
		}
	}
	system("pause");
	return 0;
}