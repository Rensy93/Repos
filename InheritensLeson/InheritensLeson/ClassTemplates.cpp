template <typename T>
int binnerySer(T arr[], int n, T toFind)
{
	int midd = (start + end) / 2;
	int start = 0;
	int end = n - 1;

	while(start <= end && arr[midd]!=toFind)
	{
		midd = (start + end) / 2;
		
		if (toFind < midd[i])
		{
			end = midd - 1;
		}
		else
		{
			start = midd + 1;
		}
	}
	if (arr[midd] != toFind)
	{
		midd = -1;
	}

	return midd;
}



int main()
{



	

	 
	system("pause");
	return 0;
}