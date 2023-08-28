// �ִ������� �ּҰ���� https://www.acmicpc.net/problem/2609
// Ǯ������ https://sectumsempra.tistory.com/77

#include <iostream>
using namespace std;

/** �ִ������� ���ϴ� ��Ŭ���� ȣ���� */
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

/** �ִ����� ���ϱ� : ���������� �ִ������� �ּҰ������ ���� �� ���� ���� ���� */
int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	cout << gcd(n1, n2) << '\n' << lcm(n1, n2);
}