#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	/*
	srand(time(0));

	for (int i = 0; i < 10; i++)
		cout << rand() % 10 << endl;

	cout << "*************" << endl;

	for (int i = 0; i<10; i++)
		cout << rand() % 90 + 10 << endl;

	cout << "*************" << endl;

	for (int i = 0; i < 100; i++)
		cout << rand() % 21-10 << endl;

	cout << "*************" << endl;
	*/
	//användare matar in en stirng (Yes or No)
	
	string answer = "";
	cout << "Answer Yes or No ";
	cin >> answer;

	if (answer == "Yes" || answer == "yes")
		cout << "You answed YES!!" << endl;

	//mata in en ny sträng
	// avgör om strängen  kommer före "mouse" i alfabetisk ordning
	cout << "enter a new word: ";
	cin >> answer;
	if (answer < "mouse")
		cout << answer <<" ligger fore mouse i alfabetet";


	system("pause");
	return 0;
}
