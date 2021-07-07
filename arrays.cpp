#include<iostream>
using namespace std;
int main()
{
	int a[] = {1, 2, 3, 3, 4};

	int n = sizeof(a) / sizeof(int);

	cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}

// basic array input file
