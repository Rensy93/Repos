#include <iostream>
#include <string>
using namespace std;

int main()
{
	string phrase="";
	int stringLength = 0;
	char aChar = '?';
	cout << "input a phrase: "<<endl;
	getline(cin, phrase);
	//to get the length of a string
	stringLength = phrase.length();
	cout << stringLength<< endl;

	//get a char at a specific location in a string
	aChar = phrase.at(0);
	cout << aChar << endl;
	//Length is is five but posision name is four
	aChar = phrase.at(stringLength-1);
	cout << aChar << endl;

	aChar = phrase.at((stringLength / 2));
	cout << aChar << endl;
	

	system("pause");
	return 0;
}