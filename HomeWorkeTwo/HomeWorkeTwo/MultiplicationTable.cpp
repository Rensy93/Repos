#include <iostream>

using namespace std;

int main()
{
	char quit = 'n';
	int userNumber = 0;
	while(quit != 'y')
	{
		cout << "Enter a number betwin 0 and 9 \n";
		cin >> userNumber; cin.ignore();
		if (userNumber < 0 || userNumber > 9)
		{
			cout << "lol you are stupid!!\n";
			system("pause");
			return 0;
		}
		for (int i = 0; i < 11; i++)
		{
			cout << userNumber << "*" << i << "=" << userNumber*i << endl;
		}
		cout << "Do you want to quit(y/n)?? \n";
		cin >> quit; cin.ignore();
	}
	system("puase");
	return 0;
}