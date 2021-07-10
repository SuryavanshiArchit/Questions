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


int main()
{
	int n;
	cin >> n;
	Factorial(n);
}