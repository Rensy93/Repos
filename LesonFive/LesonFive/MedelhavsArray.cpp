#include <iostream>

using namespace std;
const int CAP = 5;
int main()
{
	double number[CAP];
	double totalNr=0;
	for (int i = 0; i < CAP; i++)
	{
		cout << "enter a decimal number!!!: ";
		cin >> number[i];
		totalNr += number[i];
	}

	cout << "average number is: " << totalNr / CAP <<endl;
	cout << "Inte tjuvkicka Yulia :P"<<endl;


	system("pause");
	return 0;
}
