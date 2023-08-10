/*
구현

시각 문제

가능한 경우를 하나씩 세는, 전형적인 완전탐색(Brute Forcing: 가능한 경우의 수를 모두 검사해보는 탐색 방법)의 문제의 유형으로서 구현문제이기도 하다.
*/

#include <bits/stdc++.h>
using namespace std;

int n, cnt; // 입력값과 출력값 선언

// 특정한 시각 안에 3 이 포함되어 있는지의 여부
bool check(int h, int m, int s)
{
	if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3) // 30시는 없으니까 시 단위는 % 연산만 수행
		return true;
	return false;
}

int main()
{
	cin >> n;
	
	// i(시) j(분) k(초)
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				if (check(i, j, k)) cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}