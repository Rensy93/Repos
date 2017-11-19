#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int maxValue = 0, minValue = 0, answer = 0, numb1=0, numb2=0, score=0, total=0;

	cout << "enter a max value: " << endl;
	cin >> maxValue;
	cout << "enter a min value: " << endl;
	cin >> minValue;
	while (answer != (-1))
	{
		numb1 = rand() % (maxValue - minValue + 1) + minValue;
		numb2 = rand() % (maxValue - minValue + 1) + minValue;
		cout << "What is " << numb1 << "*" << numb2 << "??: ";
		cin >> answer;
		if (answer == (-1))
			break;
		
		else if (answer == numb1*numb2) //(answer!=numb1*numb2 && -1)
		{
			cout << numb1 << "*" << numb2 << "=" << numb1*numb2 << " and your answer was: " << answer << " and it's correct"<<endl;
			score++;
		}
		else
			cout << numb1 << "*" << numb2 << "=" << numb1*numb2 << " and your answer was: " << answer << " and it's wrong"<<endl;
		
		total++;

	}
	cout << "Your score was " << score << "/" << total<<endl<<endl;

	system("pause");
	return 0;
}