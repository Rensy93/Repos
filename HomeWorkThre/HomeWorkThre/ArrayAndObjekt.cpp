#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string player[5];
	int i = 0;

	while (i < 5)
	{
		cout << "enter player" << i + 1 << " namn: ";
		getline(cin, player[i]);
		i++;
	}
	cout << endl << "*****************" << endl;

	for (int h = 0; h < 5; h++)
	{
		cout << "player ones name is: "<<player[h]<<endl;
	}
	


	system("pause");
	return 0;
}
