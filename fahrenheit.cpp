#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int init = 0, fin = 300, step = 20;

	float f = init;
	int  c;

	while (f <= fin)
	{
		c = 5  * (f - 32) / 9;
		cout << f << "  " << c << endl;
		f += step;
	}
	return 0;

}