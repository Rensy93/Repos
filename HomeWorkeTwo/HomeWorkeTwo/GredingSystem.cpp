#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;


int main()
{
	int maxPoints = 0, studentPoints = 0;
	string name = "";


	cout << "What is the max points for this test??" << endl;
	cin >> maxPoints; cin.ignore();
	
	while (studentPoints != (-1))
	{
		cout << "Student score: ";
		cin >> studentPoints; cin.ignore();

		if (studentPoints == (-1))
		{
			system("pause");
			system("quit");
		}
		cout << "Student name: \n";
		getline(cin, name);

		if (studentPoints >= maxPoints*0.80)
		{
			cout << name << " Grade is VG" << endl << "***************************" << endl;
		}
		else if (studentPoints >=maxPoints*0.50)
		{
			cout << name << " Grade is G" << endl << "***************************" << endl;
		}
		else
		{
			cout << name << " You Failed You are a LOSER!!"<<endl<<"***************************" << endl;
		}

	}

	system("pause");
	return 0;
}