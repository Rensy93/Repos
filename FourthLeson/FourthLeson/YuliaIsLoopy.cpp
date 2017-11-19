#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string members[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "enter the name of member " << i + 1<<" ";
		getline(cin, members[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		cout << "Member " << i + 1 << " name is " << members[i] << endl<<"***************" << endl;
	}
	system("pause");
	return 0;
}