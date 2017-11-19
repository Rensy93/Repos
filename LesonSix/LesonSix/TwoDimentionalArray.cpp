#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int matrix[2][3] = { {11,22,88},{3} };// [2] y-axel/rader [3] x-axel/kulomner kordinaret [y,x] 
	for (int row = 0; row < 2; row++)//för varje rad
	{
		for (int col = 0; col < 3; col++)
		{
			cout << matrix[row][col] << ", ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}