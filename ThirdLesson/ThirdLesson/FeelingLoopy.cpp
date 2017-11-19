#include <iostream>

using namespace std;

int main()
{
	/*int i=2;

	while (i <= 20)
	{
		cout << i << endl << "***********" << endl;
		i+=2;
	}*/

	/*int i = 0;

	while (i < 10)
	{
		cout << i+1 << endl << "***********" << endl;
		i++;
	}*/

	/*int i = 10;

	while (i != 0)
	{
		cout << i << endl << "***********" << endl;
		i--;
	}*/

	int counter = 0 , userNumber=0;

	while (counter <= 75)
	{
		cout << "enter a number: " << endl;
		cin >> userNumber;
		counter += userNumber;
		cout << endl << "***********" << endl;
	
	}
	cout << "total sum is: " << counter<<endl;

	system("pause");
	return 0;
}