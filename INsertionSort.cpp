#include<iostream>
//In this we have to only arrange cards/
using namespace std;
int main()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int j, i;
	for (i = 1; i < n; i++) {
		int picked_card = a[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > picked_card)
			{
				a[j + 1] = a[j];
			}
			else
			{
				break;
			}


		}

		a[j + 1] = picked_card;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}