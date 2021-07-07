
// Linear search

#include<iostream>
using namespace std;
int main()
{
	int n, a[100];
	cin >> n;
	int k;
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			cout << i << endl;
			break;
		}
		if (i == n)
		{
			cout << "Not Present" << endl;
		}
	}


	return 0;
}