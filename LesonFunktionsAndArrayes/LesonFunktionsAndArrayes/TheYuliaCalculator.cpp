#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

//funktions deklaration
int menu();
double addition(double x, double y);
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);
double squareRoot(double x);
double modulus(int x, int y);


//main
int main()
{
	//variables
	int playerChoice=-1;
	double x = 0, y = 0, answer = 0;

	while (playerChoice != 0)
	{
		playerChoice = menu();

		//switch/case
		switch (playerChoice)
		{
		case 1:
		{
			//addision
			cout << "Enter your x value: ";

			cin >> x; cin.ignore();

			cout << "Enter your y value: ";

			cin >> y; cin.ignore();

			answer = addition(x, y);

			cout << x << "+" << y << " = " << answer << endl;
			break;
		}
		case 2:
		{
			//subtraction
			cout << "Enter your x value: ";

			cin >> x; cin.ignore();

			cout << "Enter your y value: ";

			cin >> y; cin.ignore();

			answer = subtraction(x, y);

			cout << x << "-" << y << " = " << answer << endl;
			break;
		}
		case 3:
		{
			//multiplication
			cout << "Enter your x value: ";

			cin >> x; cin.ignore();

			cout << "Enter your y value: ";

			cin >> y; cin.ignore();

			answer = multiplication(x, y);

			cout << x << "*" << y << " = " << answer << endl;
			break;
		}
		case 4:
		{
			//division y!=0
			cout << "Enter your x value: ";

			cin >> x; cin.ignore();

			cout << "Enter your y(y!=0) value: ";

			cin >> y; cin.ignore();

			answer = division(x, y);

			cout << x << "/" << y << " = " << answer << endl;
			break;
		}
		case 5:
		{
			//squere root x<=0
			cout << "Enter your x(no negative integers) value: ";

			cin >> x; cin.ignore();

			answer = squareRoot(x);

			cout <<"root("<< x <<  ") = " << answer << endl;
			break;
		}
		case 6:
		{
			//modulus
			cout << "Enter your x value: ";

			cin >> x; cin.ignore();

			cout << "Enter your y value: ";

			cin >> y; cin.ignore();

			answer = modulus(x, y);

			cout << x << "/" << y << " (mod " << answer<<")" << endl;
			break;
		}
		default:
			cout << "that is not a valid chioce" << endl << endl;
			break;
		}

		cout << endl << endl;
	
	}
	
	


	system("pause");
	return 0;
}

//functions

//menu
int menu() 
{

	int playerChoice;
	//system("cls");

	cout << "Please choose one of the following operators" << endl
		<< "1. addision" << endl
		<< "2. Sumtraction" << endl
		<< "3. Multiplikation" << endl
		<< "4. division" << endl
		<< "5. Square root" << endl
		<< "6. Finnd the reminder of a division" << endl
		<< "0. Quit" << endl
		<< "Your choice: ";

	cin >> playerChoice; cin.ignore();

	return playerChoice;

}

//Addition

double addition(double x, double y)
{
	double sum = 0;

	sum = x + y;

	return sum;
}

//Subtraction

double subtraction(double x, double y)
{
	double differens = 0;

	differens = x - y;

	return differens;
}

//multiplication

double multiplication(double x, double y)
{
	
	/*double prudukt = 0;

	prudukt = x*y;

		return prudukt;*/
		return x*y;
}

//division

double division(double x, double y)
{

	double awnser = 0;

	awnser = x / y;

	return awnser;

}

//square root

double squareRoot(double x)
{
	double result = 0;

	result = sqrt(x);

	return result;

}

//modulus

double modulus(int x, int y)
{

	int awnser;

	awnser = x%y;

	return awnser;

}