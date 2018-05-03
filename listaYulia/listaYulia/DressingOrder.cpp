#include "List.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
/*

clothing is an array of lists, each list representing a specific garment and containing all prerequested garments
clothes is an array containing all garments keeping track of indexes of the garment in the array of lists

garment on index 6 in the array clothes has the list of prerequested garments on index 6 in the array clothing

*/

const int CAP = 20;
void readFromFile(string filename, List<string> clothing[], string clothes[], int &nrOf) throw (...);
void ordering(List<string> clothing[], string clothes[], int nrOf, int cNrOf);
void stringChoper(List<string> clothing[], string clothes[], int &nrOf, int &cNrOf);
void addClothesToList(List<string> clothing[], string clothes[], int &nrOf, int nrOfWords, int &cNrOf);
int main()
{
	List<string> *clothing = new List<string>[CAP];
	string *clothes = new string[CAP];
	int nrOfClothes = 0;
	int clothingNr = 0;

	readFromFile("clothing.txt", clothing, clothes, nrOfClothes);
	stringChoper(clothing, clothes, nrOfClothes, clothingNr);


	cout << "Suggested order for getting dressed :"<<endl<<endl;
	ordering(clothing, clothes, nrOfClothes, clothingNr);
	cout << "Suggested order for getting dressed :"<<endl;
	
	getchar();
	return 0;
}

void readFromFile(string filename, List<string> clothing[], string clothes[], int &nrOf) throw (...)
{
	ifstream in;
	string str;
	in.open(filename);
	if (in.is_open())
	{
		getline(in, str);

		while (str != "")
		{
			clothes[nrOf++] = str;
			getline(in, str);
		}
		in.close();
	}
	else
	{
		throw "file is closed";
	}

}

void stringChoper(List<string> clothing[], string clothes[], int &nrOf, int &cNrOf)
{
	const int cap = 100;
	int nrOfWords = 0;
	string tempArr[cap];
	string temp = "";

	for (int i = 0; i < nrOf; i++)
	{
		temp = "";
		for (int h = 0; h < clothes[i].length(); h++)
		{
			if (clothes[i].length() != 0)
			{
				if (clothes[i].at(h) != ' ')
				{
					temp += clothes[i].at(h);
				}
				else
				{
					tempArr[nrOfWords++] = temp;
					temp = "";
				}
			}
		}
		if (tempArr[nrOfWords] == "");
		{
			tempArr[nrOfWords++] = temp;
		}
		
		addClothesToList(clothing, tempArr, nrOf, nrOfWords, cNrOf);
		nrOfWords = 0;
	}
		
}
void addClothesToList(List<string> clothing[], string plag[], int &nrOf, int nrOfWords, int &cNrOf)
{
	//yulia
	bool exist = false;
	int count = 0;

	if (nrOfWords == 1)
		clothing[cNrOf++].insertAt(0, plag[0]);

	else
	{
		for (int i = 0; i < cNrOf; i++)
		{
			if (clothing[i].getAt(0) == plag[0])
				clothing[i].insertAt(1, plag[1]);
		}
	}

}

void ordering(List<string> clothing[], string clothes[], int nrOf, int cNrOf)
{
	//yulia

	/*for (int i = 0; i < cNrOf; i++)
	{
		cout << endl<< endl << "list: " << i << endl;
		for (int h = 0; h < clothing[i].length(); h++)
			cout << clothing[i].getAt(h)<<endl;
	}*/
	int count = 0;
	int count2 = 0;
	int count3 = 0;
	for (int i = 0; i < CAP; i++)
	{
		clothes[i] = "-";
	}

	for (int k = 0; k < cNrOf; k++)
	{
		for (int i = 0; i < cNrOf; i++)
		{
			if (clothing[i].length() == 1)
			{
				clothes[count] = clothing[i].getAt(0);
				cout << "tabort: " << clothes[count] << endl;
				for (int h = 0; h < cNrOf; h++)
				{
					clothing[h].removeElement(clothes[count]);
				}
				count++;
			}
		}
	}
	for (int i = 0; i < count && clothes[i] != "-"; i++)
	{
		cout << i + 1 <<": "<< clothes[i] << endl;
	}
	/*cout <<endl<<endl<< "what is left in list??"<<endl<<endl;
	for (int i = 0; i < cNrOf; i++)
	{
		cout << endl << endl << "list: " << i << endl;
		for (int h = 0; h < clothing[i].length(); h++)
			cout << clothing[i].getAt(h) << endl;
	}*/
}
