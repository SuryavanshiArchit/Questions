// Write a program to count number of words,
//characters and lines in the given input. Input is
//terminated by a ‘$’

#include<iostream>
using namespace std;
int main()
{
	char ch;
	int words = 0;
	int characters = 0;
	int lines = 0;
	while (ch != '$')
	{
		cin.get(ch);

		if (ch == ' ')
		{
			words++;
		}
		if (ch >= 'A' && ch <= 'Z' or ch >= 'a' && ch <= 'z')
		{
			characters++;
		}
		if (ch == '/n')
		{
			lines++;
		}
		cout << "Words:" << words << endl;
		cout << "Characters:" << characters << endl;
		cout << "Lines:" << lines << endl;

	}
	return 0;
}