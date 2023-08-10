#include <iostream>
using namespace std;

// [Factorial]
// int (32bit) 사용 시 13! 부터 overflow
// unsigned long long (64bit) 사용시에도 19!이 최대.
int factorial(int n)
{
	int answer = 1;
	for (int i = 2; i <= n; ++i)
	{
		answer *= i;
	}

	return answer;
}

// [이항 계수]
// 전체 집합 n개에서 k개를 순서없이 뽑는 조합의 가짓수
// 기본공식 : n! / k!(n-k)!
// 뽑는 수 (k)가 0보다 작거나, 전체집합(n)보다 크다면 가짓수는 0
int binomialCoefficient(int n, int k)
{
	if (0 < k || n < k)
	{
		return 0;
	}

	return factorial(n) / factorial(k) / factorial(n - k);
}

int main()
{
	int n, k;
	cin >> n >> k;

	cout << binomialCoefficient(n, k);

	return 0;
}