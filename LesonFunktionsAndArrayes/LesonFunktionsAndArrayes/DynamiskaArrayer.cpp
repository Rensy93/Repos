#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int *nrs = new int[4];
	int *nrsTwo = nullptr;
	int *nrsThree = nrs;

	//nrs==nrsThree yes för de har samma adress

	nrsTwo = new int[4];
		for (int i = 0; i < 4; i++)
		{
			nrsTwo[i] = nrs[i];
		}

		delete[] nrs;
		delete[] nrsTwo;
		//delete[] nrsThree; då krashar du programet dock krachar det inte om du gör det till en null pointer;



		// double pointer

		int **matrix = nullptr;

		matrix = new int*[5];

		for (int row = 0; row < 0; row++)
			matrix[row] = new int[3];

		matrix[1][2] = 33;

		for (int row = 0; row < 0; row++)
			delete[] matrix[row];

		delete[] matrix;
	system("pause");
	return 0;
}