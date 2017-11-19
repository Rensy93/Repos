#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int AmuntOfNumbers = 0;
	int *numbers = nullptr;

	cout << "How meny number du you want me to randomize for you?? ";
	cin >> AmuntOfNumbers; cin.ignore();
	numbers = new int[AmuntOfNumbers];

	for (int i = 0; i < AmuntOfNumbers; i++)
	{

		numbers[i] = rand() % 1000;
	}
	cout << "This are the number"<<endl;
	for (int i = 0; i < AmuntOfNumbers; i++)
	{

		cout<<numbers[i] << " ";
	}



	cout << "This are the numbers between 0-499" << endl;
	for (int i = 0; i < AmuntOfNumbers; i++)
	{
		if (numbers[i] < 500)
			cout << numbers[i] << " ";
	}

	cout << "This are the numbers between 500-9990" << endl;
	for (int i = 0; i < AmuntOfNumbers; i++)
	{
		if (numbers[i] > 499)
			//cout << numbers[i] << " ";
			print(numbers[i]);
	}


	
	system("pause");
	return 0;
}
public void print(int a)
{
	cout << a << " ";

}