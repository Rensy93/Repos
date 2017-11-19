#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int userInteger = 1;
	double count = 0.0;
	int userIntegerTotal = 0;
	while (userInteger !=0)
	{
		cout << "Enter a integer: ";
		cin >> userInteger;
		userIntegerTotal += userInteger;
		count++;


	}
	cout << "You enterd " << count-1 << " nr and the total value was: " 
		 << userIntegerTotal << " and the average is: " 
		 << userIntegerTotal / (count-1) << endl << endl;

	system("pause");
	return 0;
}