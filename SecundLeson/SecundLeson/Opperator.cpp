#include <iostream>


using namespace std;

int main() 
{
	int x = 0, y = 20, z=0;

	x++;
	y--;
	

	
	cout <<
		x << endl <<
		y << endl <<
		z << endl;
	
	z = y++; // variablen används först en +1
	cout << z << endl;
	z = ++y; // först +1 variablen sen används den
	cout << z << endl;
	cout <<"y = "<< y << endl;

	//sammansat tilldelning (snabare sätt att skriva en tilldelning på)

	y += 10 // är samma som att skriva y=y+10;
	z -= 3; // z= z-3
	x %= 2; // x = x%2;

	cout <<
		x << endl <<
		y << endl <<
		z << endl;

	system("pause");
	return 0;
}