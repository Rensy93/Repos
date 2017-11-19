#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int userInteger = 0, rounds = 0, i =0;
	
	cout << "Enter a integer between 0-9: ";
	cin >> userInteger;
	if (userInteger > 9) 
	{
		cout << "How hard can it be to enter a integer between 0-9, The program will terminate you!!"<<endl<<endl;
	}
	else
	{
		cout << "how far do you want the table to go?? ";
		cin >> rounds;

		while (i <= rounds)
		{
			cout << userInteger << "*" << i << "=" << userInteger*i
				<< endl << "************" << endl;

			i++;
		}
	}

	system("pause");
	return 0;
}
