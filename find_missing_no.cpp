#include<iostream>
using namespace std;
int main()
{
	int n, a[100];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int tans = n(n + 1) / 2;
	int sans = 0;

	for (int i = 0; i < n; i++)
	{
		sans += a[i];
	}
	int ans = 0;

	ans = tans - sans;

	cout << ans << endl;

	//2nd approach
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		k ^= a[i];
	}
	for (int i = 0; i <= n; i++)
	{
		k ^= i;
	}
	cout << "Missing Number :" << k << endl;


	return 0;

}