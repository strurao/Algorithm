#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int mod = a % b;
	while (mod > 0)
	{
		a = b;
		b = mod;
		mod = a % b;
	}
	return b;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int x = 24;
	int y = 32;

	cout << gcd(x, y) << endl;
	cout << lcm(x, y) << endl;

	return 0;
}