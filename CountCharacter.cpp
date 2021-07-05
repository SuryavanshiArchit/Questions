#include<iostream>
using namespace std;
int main()
{
	char ch;
	int cnt = 0;
	while (ch != '$')
	{
		cnt++;
		cin.get(ch);

		cout << ch << " ";
	}
	cout << cnt << endl;
}