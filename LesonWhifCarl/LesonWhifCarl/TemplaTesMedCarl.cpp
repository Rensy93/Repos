#include <iostream>
#include <string>
using namespace std;

//
template <typename T>
void print(T data);

template <typename T>
void printContent(T theArray[], int theCap);

int main()
{
	int test = 30;
	string test2 = "hej o hå";
	char  test3 = '?';

	print(test);
	print(test2);
	print(test3);

	int *number = nullptr;
	int nrs[] = { 1,22,66,77,35,25,15,68 };
	string words[] = { "hej","då","din", "apa" };
	number = new int[5];


	for (int i = 0; i < 5; i++)
	{
		nrs[i] = i * 10;

	}

	printContent(nrs, 5);
	printContent(words, 3);

	system("pause");
	return 0;
}


//explesit för varge funktion.
template <typename T>
void print(T data)
{

	cout << data<<endl;

}

template <typename T>
void printContent(T theArray[], int theCap)
{

	for (int i = 0; i < theCap; i++)
	{
		cout << theArray[i];

	}

}