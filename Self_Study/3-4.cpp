/*
그리디 실전

1이 될때까지 문제

시간복잡도가 로그시간복잡도가 나올 수 있다
*/

#include <bits/stdc++.h>
using namespace std;

int n, k; // 예: n 30, k 4
int result; // 0

int main()
{
	// N, K를 공백을 기준으로 구분하여 입력 받기
	cin >> n >> k;

	while (true)
	{
		// n 이 k 로 나누어 떨어지는 수가 될 때까지만 1씩 빼기
		int target = (n / k) * k; // (테크닉) n 이 k 로 나누어떨어지지 않을 때, 가장 가까운 k로 나누어떨어지는 수를 찾을 수 있다
		result += (n - target); // (테크닉) 1을 빼는 연산을 몇 번 수행할 지 한 번에 더해준다
		n = target;

		// n 이 k 보다 작을 때 (더 이상 나눌 수 없을 때) 반복문 탈출
		if (n < k) break;

		// k 로 나누기
		result += 1;
		n /= k;
	}

	// 마지막으로 남은 수에 대하여 1씩 빼기
	result += (n - 1);
	cout << result << '\n';
}