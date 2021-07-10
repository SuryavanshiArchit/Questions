#include<iostream>
using namespace std;

void Factorial(int n)
{
	int ans = 1;
	while (n >= 1)
	{
		ans *= n ;
		n--;
	}

	cout << ans << endl;
}

void Ncr(int n, int r)
{
	int k = Factorial(n) / Factorial(r) * Factorial(n - r);
	cout << k << endl;
}


int main()
{
	int n = 5, r = 2;

	Ncr(n, r);
}