#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const double PI = 3.1415; // konstant skrivs med bara varsaler and underscore.


int main()
{
	double circleradius; // oinitierad variable
	double circlearea = 0.0; // initierad variable
	cout << "this program can calculate your circle" << endl << endl;
	cout << "enter the redius of your circle: ";
	cin >> circleradius;
	cout << PI*pow(circleradius, 2.0); //behöver includering av cmath
	circlearea = (circleradius * circleradius)*PI; // tilldelning
	cout <<endl<< "the area of your circle is: " << circlearea << " au" << endl;
	cout << "the circumference of your cirle is: " << 2 * PI*circleradius << " lu" << endl;




	system("pause"); // get prese any key to continue.......
	return 0;
}