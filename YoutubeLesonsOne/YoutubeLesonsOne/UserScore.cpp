#include <iostream>

using namespace std;

int main()
{
	int score = 0;
	char loop = 'y';
	while (loop !='n')
	{
		cout << "Enter your score (0-100): "<<endl;
		cin >> score; cin.ignore();
		if(score < 0 || score > 100)
		{
			cout << "Invalid score was enterd, program will terminate you!!" << endl;
			system("pause");
			return 0;

		}
		else
		{
			if (score >= 90)
			{
				cout << "Awesome!!" << endl;
			}
			else if (score >= 80)
			{
				cout << "well Done!" << endl;
			}
			else if (score >= 70) 
			{
				cout << "Average" << endl;
			}
			else if (score >= 60)
			{
				cout << "Bummer" << endl;
			}
			else
			{
				cout << "You Suck!!" << endl << endl;
			}
		}
	}
	cout << ("go agin?? (y/n)") << endl << endl;
	cin >> loop; cin.ignore();
	system("pause");
	return 0;
}