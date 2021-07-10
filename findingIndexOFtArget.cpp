#include<iostream>
using namespace std;
int main()
{
	int n;
	int target;
	cin >> target;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}


	for (int i = 0; i < n; i++)
	{
		if (a[i] == target || a[i] > target)
		{
			cout << i << endl;

		}

	}
	if (target > a[n - 1])
	{
		cout << n < endl;
	}


	return 0;
}