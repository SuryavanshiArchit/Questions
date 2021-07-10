#include<iostream>

using namespace std;
int main()
{
	int n, k, a[1000];
	cin >> n >> k;


	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += a[j];
			if (sum == k)
			{
				cout << "Subarrays :" << "[" << i << "," << j << "]" << endl;
				cnt++;
			}
		}
	}
	cout << "Total Subarrays :" << cnt << endl;
	return 0;
}