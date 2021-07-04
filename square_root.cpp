#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float  i;
	float inc = 1;
	int current_precision = 0;
	int max_precision = 3;
	while (current_precision <= max_precision)
	{
		while (i * i < n)
		{
			i += inc;
		}
		i -= inc;
		inc /= 10;
		current_precision++;
	}

	cout << i << endl;

	return 0;
}