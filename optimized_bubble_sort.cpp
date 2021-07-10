#include<iostream>
using namespace std;
int  main()
{
	int n, a[1000];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n - i - 2; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				cnt++;
			}
		}
		if (cnt == 0)
		{
			break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}