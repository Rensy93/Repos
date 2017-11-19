#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";

	cout << "Hello there whats your name??";
	getline(cin, name);

	cout << "Hello " << name << endl 
		<< " I'm Rensy and I'm an A.S.I" << endl << endl;



	system("pause");
	return 0;
}