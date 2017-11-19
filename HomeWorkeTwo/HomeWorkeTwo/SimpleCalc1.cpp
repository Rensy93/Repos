#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	double y, x, answere;
	cout << "This program is calculating the two values you enter on with the formola 4x-12(y+13)+xy/2\n\n Enter a value for x and y\n\n";
	cin >> x;
	cin >> y;

	answere = 4 * x - 12 * (y + 13) + (x*y) / 2;
	cout << answere<<endl;

	system("pause");
	return 0;
}