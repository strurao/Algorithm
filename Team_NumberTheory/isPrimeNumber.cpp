#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNumber(int x)
{
	for (int i = 2; i < sqrt(x) + 1; ++i)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cout << isPrimeNumber(4) << endl; // false
	cout << isPrimeNumber(7) << endl; // true

	return 0;
}