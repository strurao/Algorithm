// 최대공약수와 최소공배수 https://www.acmicpc.net/problem/2609
// 풀이참고 https://sectumsempra.tistory.com/77

#include <iostream>
using namespace std;

/** 최대공약수를 구하는 유클리드 호제법 */
int gcd(int a, int b)
{
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

/** 최대공배수 구하기 : 수학적으로 최대공약수와 최소공배수의 곱은 두 수의 곱과 같다 */
int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	cout << gcd(n1, n2) << '\n' << lcm(n1, n2);
}