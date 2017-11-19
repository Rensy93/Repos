#include "Coffee.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//prototypes
int menu();
void userAddCoffeeSort(Coffee *&coffees, int &nrOfCoffees, int &cap);
int findCoffeeSort(Coffee coffees[], Coffee &newCoffee, int nrOfCoffees);
void printAllCoffees(Coffee coffees[], int nrOfCoffees);
void serchCoffeeSort(Coffee coffees[], int nrOfCoffees);
void changePriceByProcent(Coffee coffees[], int nrOfCoffees);
void showAllCoffeesUnderSpecifikPrice(Coffee coffees[], int nrOfCoffees);
void showMostExpenciveOne(Coffee coffees[], int nrOfCoffees);
void removeCoffee(Coffee coffees[], int &nrOfCoffees);
void removeAllCoffeesOfBrand(Coffee coffees[], int &nrOfCoffees);
void sortCoffeesByProfit(Coffee coffees[], int nrOfCoffees);
void saveCoffeeToTxtFile(Coffee coffees[], int nrOfCoffees, string fileName);
void readCoffeeFromTxtFile(Coffee *&coffees, int &nrOfCoffees, int &cap, string fileName);
void expandArray(Coffee *&coffees, int nrOfCoffees, int &cap);

int main()
{
	int cap = 0, nrOfCoffees = 0, userChoice = -1;
	string fileName = "Coffees.txt";
	Coffee *coffees = nullptr;
	coffees = new Coffee[cap];

	while (userChoice != 0)
	{

		userChoice = menu();

		switch (userChoice)
		{

		case 1:
		{
			//1. add coffee sort
			userAddCoffeeSort(coffees, nrOfCoffees, cap);
			break;
		}
		case 2:
		{
			

			//2. show all coffees inforamion
			printAllCoffees(coffees, nrOfCoffees);
			break;
		}
		case 3:
		{

			//sertch coffee sort
			serchCoffeeSort(coffees, nrOfCoffees);
			break;
		}
		case 4:
		{

			
			//4. raise all costomer prices by procent
			changePriceByProcent(coffees, nrOfCoffees);
			break;
		}
		case 5:
		{

			//show all whith a pice lower then a specific price
			showAllCoffeesUnderSpecifikPrice(coffees, nrOfCoffees);
			break;
		}
		case 6:
		{


			//6. show informaiton for the most expensive coffee sort
			showMostExpenciveOne(coffees, nrOfCoffees);
			break;
		}
		case 7:
		{

			//7. remove a coffee sort
			removeCoffee(coffees, nrOfCoffees);
			break;
		}
		case 8:
		{

			//remove all coffee sorts
			removeAllCoffeesOfBrand(coffees, nrOfCoffees);

			break;
		}
		case 9:
		{

			//9. sort coffee sorts by proffit
			sortCoffeesByProfit(coffees, nrOfCoffees);
			break;
		}
		case 10:
		{

			//10. save coffee sort information
			saveCoffeeToTxtFile(coffees, nrOfCoffees, fileName);
			break;
		}
		case 11:
		{

			//11. lode cooffee sort informaiton

			readCoffeeFromTxtFile(coffees, nrOfCoffees, cap, fileName);
			break;
		}
		default:
			break;
		}

	}





	delete[] coffees;
	system("pause");
	return 0;
}


//deklaratioons
int menu()
{
	int choice = -1;

	cout << "1. add coffee sort" << endl
		<< "2. show all coffees inforamion" << endl
		<< "3. sertch coffee sort" << endl
		<< "4. raise all costomer prices by procent" << endl
		<< "5. show all whith a pice lower then a specific price" << endl
		<< "6. show informaiton for the most expensive coffee sort" << endl
		<< "7. remove a coffee sort" << endl
		<< "8. remove all coffee sorts" << endl
		<< "9. sort coffee sorts by proffit" << endl
		<< "10. save coffee sort information" << endl
		<< "11. lode cooffee sort informaiton" << endl
		<< "0. quit" << endl
		<< "Your choice: ";
	cin >> choice; cin.ignore();

	return choice;

}

void userAddCoffeeSort(Coffee *&coffees, int &nrOfCoffees, int &cap)
{
	string barnd, type;
	int storePrice, costmoerPrice, pos;

	cout << "Enter coffee barand: ";
	getline(cin, barnd);

	cout << "Enter coffee type: ";
	getline(cin, type);

	Coffee newCoffee(barnd, type);

	pos = findCoffeeSort(coffees, newCoffee, nrOfCoffees);

	if (pos != -1)
	{
		cout << "this coffee sort alredy exist" << endl;
	}
	else
	{
		cout << "Enter store price: ";
		cin >> storePrice;

		cout << "Enter costomer price: ";
		cin >> costmoerPrice; cin.ignore();

		Coffee newCoffee(barnd, type, storePrice, costmoerPrice);

		if (nrOfCoffees >= cap)
		{

			expandArray(coffees, nrOfCoffees, cap);

		}

		coffees[nrOfCoffees] = newCoffee;

		nrOfCoffees++;
		cout << "was added" << endl;

	}
	
}

int findCoffeeSort(Coffee coffees[], Coffee &newCoffee, int nrOfCoffees)
{
	int pos = -1;

	for (int i = 0; i < nrOfCoffees && pos ==-1; i++)
	{
		if (coffees[i] == newCoffee)
		{
			pos = i;

		}
	}

	return pos;
}

void printAllCoffees(Coffee coffees[], int nrOfCoffees)
{

	for (int i = 0; i < nrOfCoffees; i++)
	{
		
		cout << coffees[i].toString() << endl;
	}

}

void serchCoffeeSort(Coffee coffees[], int nrOfCoffees)
{
	string barnd, type;
	int pos=-1;

	cout << "Enter coffee barand: ";
	getline(cin, barnd);

	cout << "Enter coffee type: ";
	getline(cin, type);

	Coffee newCoffee(barnd, type);

	pos = findCoffeeSort(coffees, newCoffee, nrOfCoffees);

	if (pos != -1)
	{
		cout << coffees[pos].toString() << endl;
	}
	else
	{
		cout<<"dose not exist";
	}

}

void changePriceByProcent(Coffee coffees[], int nrOfCoffees)
{
	int procent = 0;
	
	cout << "enter how meny procent you want to raice costomerprice whit [100%-0.01%]: ";
	cin >> procent; cin.ignore();

	for (int i = 0; i < nrOfCoffees; i++)
	{

		coffees[i].upDatePriceByProcent(procent);
	
	}

	

}

void showAllCoffeesUnderSpecifikPrice(Coffee coffees[], int nrOfCoffees)
{
	int price = 0;
	cout << "Enter a price: ";
	cin >> price; cin.ignore();

	for (int i = 0; i < nrOfCoffees; i++)
	{

		if (coffees[i].GetCostmerPrice() < price)
		{

			cout << coffees[i].getBrand() << "  " << coffees[i].getType() << endl;

		}

	}

}

void showMostExpenciveOne(Coffee coffees[], int nrOfCoffees)
{
	int posExpencive = 0;

	for (int i = 1; i < nrOfCoffees; i++)
	{

		if (coffees[posExpencive].GetCostmerPrice() < coffees[i].GetCostmerPrice())
		{

			posExpencive = i;

		}

	}

	cout << "Most expensive sort is: " << coffees[posExpencive].toString() << endl;
}

void removeCoffee(Coffee coffees[], int &nrOfCoffees)
{
	
	string barnd, type;
	int pos = -1;

	cout << "Enter coffee barand: ";
	getline(cin, barnd);

	cout << "Enter coffee type: ";
	getline(cin, type);

	Coffee newCoffee(barnd, type);

	pos = findCoffeeSort(coffees, newCoffee, nrOfCoffees);

	if (pos == -1)
	{
		cout << "Dose not exist" << endl;
	}
	else
	{

		coffees[pos] = coffees[nrOfCoffees-1];
		nrOfCoffees--;
		cout << "it's removed" << endl;

	}

}

void removeAllCoffeesOfBrand(Coffee coffees[], int &nrOfCoffees)
{
	//int pos = -1;
	string brand;
	cout << "enter name of brand to remove ";
	getline(cin, brand);

	for (int i = 0; i < nrOfCoffees-1; i++)
	{

		if(coffees[i].getBrand()==brand)
		{

			coffees[i] = coffees[nrOfCoffees];
			nrOfCoffees--;

		}

	}

}

void sortCoffeesByProfit(Coffee coffees[], int nrOfCoffees)
{
	Coffee temp;
	int posOfSmalest = -1;

	for (int i = 0; i < nrOfCoffees; i++)
	{
		posOfSmalest = i;
		for (int h = i + 1; h < nrOfCoffees; h++)
		{

			if (coffees[h] < coffees[posOfSmalest])
			{

				posOfSmalest = h;

			}

		}

		temp = coffees[posOfSmalest];
		coffees[posOfSmalest] = coffees[i];
		coffees[i] = temp;


	}



}

void saveCoffeeToTxtFile(Coffee coffees[], int nrOfCoffees, string fileName)
{
	string brand, type;
	int storePrice, costomerPrice;
	ofstream out;
	out.open(fileName);

	out << nrOfCoffees;
	out << endl;

	for (int i = 0; i < nrOfCoffees; i++)
	{
		brand = coffees[i].getBrand();
		out << brand;
		out << endl;

		type = coffees[i].getType();
		out << type;
		out << endl;

		storePrice = coffees[i].getStorePrice();
		out << storePrice;
		out << endl;

		costomerPrice = coffees[i].GetCostmerPrice();
		out << costomerPrice;
		out << endl;
	}

	out.close();
}

void readCoffeeFromTxtFile(Coffee *&coffees, int &nrOfCoffees, int &cap, string fileName)
{

	string brand, type;
	int storePrice, costomerPrice, fileNr;
	ifstream in;
	in.open(fileName);
	
	in >> fileNr; in.ignore();
	

	for (int i = nrOfCoffees; i < nrOfCoffees+fileNr; i++)
	{

		/*if (cap <= nrOfCoffees)
		{
			expandArray(coffees, nrOfCoffees, cap);
		}*/

		getline(in, brand);
		
		getline(in, type);
		
		in >> storePrice; in.ignore();

		in >> costomerPrice; in.ignore();

		coffees[i]=Coffee(brand, type, storePrice, costomerPrice);
	}

	nrOfCoffees += fileNr;

	in.close();

}

void expandArray(Coffee *&coffees, int nrOfCoffees, int &cap)
{
	if (cap != 0)
	{
		cap *= 2;
	}
	else
	{
		cap = 5;
	}

	Coffee *tempCoffees = new Coffee[cap];
	for (int i = 0; i < nrOfCoffees; i++)
	{

		tempCoffees[i] = coffees[i];

	}

	delete[] coffees;
	
	coffees = tempCoffees;

	tempCoffees = nullptr;

}