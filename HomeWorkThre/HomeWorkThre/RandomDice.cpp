#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;


//int main()
//{
//	srand(time(0));
//	int countFor4 = 0;
//	int i = 0;
//
//	while (i < 12)
//	{
//		int cast = rand() % 6 + 1;
//		cout << cast << endl;
//
//		if (cast == 4)
//		{
//			countFor4++;
//		}
//		
//		i++;
//	}
//
//	cout << "There was a total of " << countFor4 << " fours"<<endl;
//	system("pause");
//	return 0;
//}
//
//

int main()
{
	//int tid = time(0);
	srand(time(0));
	int diceRolls[12];
	int countFor4 = 0;


	for (int i = 0; i < 12; i++)
	{
		diceRolls[i] = rand() % 6 + 1;
	}
	for (int h = 0; h < 12; h++)
	{
		cout << diceRolls[h] << endl;
		if (diceRolls[h] == 4)
		{
			countFor4++;
		}
	}

	cout << "There is " << countFor4 << " fours"<<endl;


	system("pause");
	return 0;
}