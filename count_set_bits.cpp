#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int cnt = 0;
	int mask = 1;
	while (x)
	{
		if ((x & mask) == 1)
		{
			cnt++;
		}
		x = x >> 1;
	}
	cout << "Set Bits :" << cnt << endl;
	return 0;
}