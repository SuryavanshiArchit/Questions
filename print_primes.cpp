#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 2;
	int no = 2;
	for (no = 2; no <= n; no++)
	{
		bool isPrime = true;
		for (int i = 2; i < no; i++)
		{
			if (no % i == 0)
			{
				isPrime = false;
			}
		}
		if (isPrime == true)
		{
			cout << no << endl;
		}
	}

	return 0;
}