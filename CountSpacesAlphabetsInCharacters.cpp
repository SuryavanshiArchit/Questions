#include<iostream>
using namespace std;
int main()
{
	char ch;
	int dig = 0;
	int white = 0;
	int alpha = 0;
	int OC = 0;
	while (ch != '$')
	{
		cin.get(ch);
		if (ch >= '0' && ch <= '9' )
		{
			dig++;
		}
		else if (ch == '\n' or ch == '\t' or ch == ' ')
		{
			white++;
		}
		else if (ch >= 'A' && ch <= 'Z' or ch >= 'a' && ch <= 'z')
		{
			alpha++;
		}
		else
		{
			OC++;
		}
	}

	cout << "Alphabets:" << alpha << endl;
	cout << "Digits:" << dig << endl;
	cout << "WhiteSpace:" << white << endl;
	cout << "Special Characters:" << OC << endl;
	return 0;
}