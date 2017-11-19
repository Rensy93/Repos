#include <iostream>
#include <string>

using namespace std;

//prototyper
void printThings(string what);
void printThings(int what);
void printThings(string what, int nr);
void printThings(int nr, string what);

int main()
{
	int value = 11;
	string phrase = "c++ is fun";

	printThings(phrase);
	printThings(value);
	printThings(phrase, value);
	printThings(value, "WTF!!");

	system("pause");
	return 0;
}

//funktion deklaradion
void printThings(string what)
{

	cout << what<<" "<<endl;

}

void printThings(int what)
{

	cout << what << " " << endl;

}

void printThings(string what, int nr)

{
	cout << what << " " << nr << endl;
}

void printThings(int nr, string what)
{
	cout << nr << " " << what << endl;
}