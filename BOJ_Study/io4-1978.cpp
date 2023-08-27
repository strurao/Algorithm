// 소수찾기 https://www.acmicpc.net/problem/1978

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++의 입출력 버퍼를 C 표준 입출력과 동기화하지 않음
	cin.tie(0);  // cin과 cout의 묶음 해제
	cout.tie(0); // cout의 묶음 해제

	int N, result = 0;
	int temp, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		for (int div = 1; div <= temp; div++) {
			if (temp % div == 0)
				cnt++;
		}
		if (cnt == 2)	//temp가 소수
			result++;
		cnt = 0;
	}
	cout << result << '\n';
}