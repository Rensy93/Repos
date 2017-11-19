#include <iostream>

using namespace std;

const double CHESS_BOARD = 63;
int main()
{
	double rice = 1, riceTotal=1;
	cout << "in this program we will place a grain of rice on the fisrt squer of a chess board and double it for every squer all the way to the last onn\n\n";
	cout << "squer: " << 1 << "has numer of rice grain : " << rice <<endl<<endl;
	for (int i = 1; i <= CHESS_BOARD; i++)
	{
		
		rice += rice;
		cout << "squer: " << i+1 << " has numer of rice grain : "<<rice<<endl<<endl;
		riceTotal += rice;
	}
	cout << "the total numer of rice on squer 64 is: "<< rice << endl << endl;
	cout << "The total amunt of rice on the chess bard is: " << riceTotal<<endl<<endl;
	system("pause");
	return 0;
}