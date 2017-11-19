#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
const double PI = 3.1415;
int main()
{
	int UserChoise = 0;
	while (UserChoise != 3)
	{
		cout << "Chose one of the folowing choses for the meny below" << endl
			<< "1) cirkle" << endl
			<< "2) Rätvinklig triangel" << endl
			<< "3) quit\n\n";
		cin >> UserChoise;
		//quit
		if (UserChoise == 3)
		{
			system("pause");
			return 0;
		}
		//cirkle
		else if (UserChoise == 1)
		{
			int radius = 0;
			cout << "Radius??\n";
			cin >> radius;

			cout << "Circle has a redius of: " << radius << endl
				<< " and a circumference of: " << 2 * PI*radius << endl
				<< " and a area of:          " << PI*pow(radius, 2) << endl;
		}
		//triangle
		else if (UserChoise ==2)
		{
			int katOne = 0, katTwo=0;
			cout << "What is the value for the first katet\n";
			cin >> katOne;
			cout << "What is the value for the secund katet\n";
			cin >> katTwo;
			cout <<"Triangle has katetOne: " << katOne<<endl << "Triangle has katetTwo: " << katTwo << endl
				<< " and a Hypothinus is equal to: " << sqrt(pow(katOne, 2) + pow(katTwo, 2)) << endl
				<< " and a area of:          " << (katOne*katTwo) / 2 << endl << endl;

		}
		else
		{
			cout << "invaild coise termenatin program";
			return 0;
		}
	}
	
}