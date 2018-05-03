#include <iostream>
#include <string>

using namespace std;

void sortResults(int nr, double arr[]);

const int MAX = 20;
int main()
{

	double nr = 5, tot = 0.0, mean;
	double nrs[MAX];
	int count = 0;
	cout << "enter numbers (exit by (0))" << endl << endl;

	do
	{
		cout << "nr??";
		cin >> nr;
		
		if (nr != 0)
			nrs[count++] = nr;

	}while (nr != 0);

	cout << "sorterat result" << endl << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "nr" << i << ": " << nrs[i] << endl;
	}

	sortResults(count, nrs);

	cout << "sorterat result"<<endl<<endl;

	for (int i = 0; i < count; i++)
	{
		cout << "nr" << i << ": " << nrs[i] << endl;
	}
	
	for (int i = 1; i < count-1; i++)
	{
		tot += nrs[i];
	}
	
	mean = tot / (count - 2);

	cout << "the mean: " << mean<<endl<<endl;

	system("pause");
	return 0;
}


void sortResults(int nr, double arr[])
{
	int posOfSmalest = 0;
	double temp;

	for (int i = 0; i < nr-1; i++)
	{
		posOfSmalest = i;

		for (int h = i + 1; h < nr; h++)
		{

			if (arr[h] < arr[posOfSmalest])
				posOfSmalest = h;

		}

	

		//age
		temp = arr[i];
		arr[i] = arr[posOfSmalest];
		arr[posOfSmalest] = temp;



	}
}
