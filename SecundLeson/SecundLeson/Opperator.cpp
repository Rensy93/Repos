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
	
	z = y++; // variablen anv�nds f�rst en +1
	cout << z << endl;
	z = ++y; // f�rst +1 variablen sen anv�nds den
	cout << z << endl;
	cout <<"y = "<< y << endl;

	//sammansat tilldelning (snabare s�tt att skriva en tilldelning p�)

	y += 10 // �r samma som att skriva y=y+10;
	z -= 3; // z= z-3
	x %= 2; // x = x%2;

	cout <<
		x << endl <<
		y << endl <<
		z << endl;

	system("pause");
	return 0;
}