#include <iostream>
#include <string>

using namespace std;

int main()
{
	double	largesNumber=0, smalestNumber=0, averageNumber=0 , number = 0;
	for (int i=0; i < 3; i++)
	{
		//int number, largesNumber, smalestNumber, averageNumber;
		cout << "Enter a number: ";
		cin >> number;
		if (number > largesNumber)
		{
			largesNumber = number;
		}
		else if (number > 0 || number < smalestNumber)
		{
			smalestNumber = number;
		}

		averageNumber+=number;
	}
	(averageNumber/3);
	cout << "The largest number is: "<< largesNumber << endl;
	cout << "The smalest number is: " << smalestNumber << endl;
	cout << "The avrege number is: " << (averageNumber/3);


	getchar();
	getchar();
	return 0;
}