#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;
	char ch = 'A';
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << ch;
			ch++;
		}

		ch = 'A' + n - i;
		ch--;
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << ch;
		}
	}
}