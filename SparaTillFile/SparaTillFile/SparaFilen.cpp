#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main()
{
	string user = "h";
	while (user != "")
	{

		getline(cin, user);
		ofstream f;
		f.open("file.txt");
		f << user;
		f.close();

	}

	ifstream f; 
	f.open("file.txt");

	string str="";

	while (f >> str)
	{
		cout << str<<endl;
	}

	
	system("pause");
	return 0;
}