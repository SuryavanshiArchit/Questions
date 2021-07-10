#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int profit = 0;
	int min_price = INT_MAX;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min_price)
		{
			min_price = a[i];
		}
		else
		{
			profit = max(profit, a[i] = min_price)
		}
	}
	cout << profit << endl;
	return 0;
}
