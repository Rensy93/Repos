#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//
	string firstLine;
	string secondLine;
	int thirdLine;
	ifstream in;
	//ifstream out;

	in.open("TextFil.txt"); //om fillen ligger tilsammans med cpp-filerna
	//in.open("C:\\temp\\textfil.txt"); //om man vill ha filen var som så 

	getline(in, firstLine);
	in >> secondLine;
	in >> thirdLine;
	
	cout << firstLine << endl;
	cout << secondLine << endl;
	cout << thirdLine << endl;

	//glömminte att stänga fillen :P
	in.close();

	/*getline(cin, firstLine);

	firstLine >> out;*/


	system("pause");
	return 0;
}