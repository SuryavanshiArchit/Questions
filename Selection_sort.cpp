#include<iostream>
using namespace std;
int main()
{

	int n;
	cin >> n;

	int a[100];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		swap(a[min], a[i]);
	}


	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}


	return 0;
}