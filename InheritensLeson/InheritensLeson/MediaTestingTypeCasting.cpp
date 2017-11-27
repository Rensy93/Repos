#include "Book.h"
#include "Movi.h"
#include <iostream>
using namespace std;

int main()
{
	//anv�ndaren mattar in cap
	int cap;
	cout << "enter cap";
	cin >> cap; cin.ignore();

	//alokering av minne m�ste vara doublepekar array;
	Media* *medias=new Media*[cap];

	//Statisc allocerad array av abstract class
	//Media* medias[20];

	//skappa 3 b�cker & 2 filmer;

	medias[0] = new Book("aa", 2017, "cc");
	medias[1] = new Movi("cc", 2016,217, "aa");
	medias[2] = new Book("bb", 2016, "bb");
	medias[3] = new Movi("cc", 2016,218, "aa");
	medias[4] = new Book("cc", 2016, "aa");
	
	int numberOfCurrentMedia = 5;

	//presentera 
	for (int i = 0; i < numberOfCurrentMedia; i++)
	{
		cout << medias[i]->toString() << endl << endl;
	}

	//precentera enbart b�cker

	cout << "arrayen ineh�ller f�ljande b�cker" << endl<<endl;
	for (int i = 0; i < numberOfCurrentMedia; i++)
	{
		if (dynamic_cast<Book*>(medias[i]) != nullptr)
			cout << medias[i]->toString() << endl << endl;
	}

	// l�g till valfri typ av media
	cout << "what typ do you whant to add??(b/m)";
		char c;
		string title = "";
		int pubYear = 0;
		string author;
		int playTime;
		string MainActor;
		cin >> c; cin.ignore();
		if (c != 'b')
		{
			cout << "enter title, year, play time and Mainactor";
			getline(cin, title);
			cin >> pubYear; cin.ignore();
			getline(cin, MainActor);
			cin >> playTime; cin.ignore();
			medias[numberOfCurrentMedia++] = new Movi(title, pubYear, playTime, MainActor);
			
		}
		else
		{
			cout << "enter title, year and Author";
			getline(cin, title);
			cin >> pubYear; cin.ignore();
			getline(cin, author);
			medias[numberOfCurrentMedia++] = new Book(title, pubYear, author);
		}

		//presentera 
		for (int i = 0; i < numberOfCurrentMedia; i++)
		{
			cout << medias[i]->toString() << endl << endl;
		}
	// best�m antal st av varje typ
		int numberOfbooks = 0;
		for (int i = 0; i < numberOfCurrentMedia; i++)
		{
			if (dynamic_cast<Book*>(medias[i]) != nullptr)
				numberOfbooks++;
		}
		cout << "books: " << numberOfbooks << endl 
			<< "Movies: " << numberOfCurrentMedia - numberOfbooks << endl;
	//presentera titlar av sandwis
		Book* bookPtr = nullptr;
		for (int i = 0; i < numberOfCurrentMedia; i++)
		{
			bookPtr = dynamic_cast<Book*>(medias[i]);
			if (bookPtr != nullptr)
			{
				if (bookPtr->getAuthor() == "Yulia")
					cout << bookPtr->getTitle()<<endl<<endl;
			}
		}

	system("pause");
	return 0;
}