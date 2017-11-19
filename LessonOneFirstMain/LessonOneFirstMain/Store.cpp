#include <iostream>
#include <string>

using namespace std;

int main()
{
	string article;
	int price, amount;

	cout << "Enter the name of an article"<<endl;
	cin >> article;
	cout << "what is the price for the article??" << endl;
	cin >> price;
	cout << "How meny are you buying??" << endl;
	cin >> amount;
	cout << "The cost of " << amount << " " << article << " at " << price << "kr is " << amount*price << "kr";


	getchar();
	getchar();
	return 0;
}