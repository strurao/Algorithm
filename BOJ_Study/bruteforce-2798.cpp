// 블랙잭 https://www.acmicpc.net/problem/2798

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++의 입출력 버퍼를 C 표준 입출력과 동기화하지 않음
	cin.tie(0);  // cin과 cout의 묶음 해제
	cout.tie(0); // cout의 묶음 해제

	int n, m, result = 0;
	int arr[101] = {};
	cin >> n >> m; // 사용자로부터 n과 m을 입력 받음
	for (int i = 0; i < n; i++)
		cin >> arr[i];  // n개의 정수를 배열 arr에 입력 받음

	// 3중첩 반복문으로 배열 arr에서 세 개의 정수를 선택하고, 그 합이 m보다 작거나 같은 경우 최대 합인 result를 갱신한다
	for (int i = 0; i < n; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			for (int k = j + 1; k < n; k++) 
			{
				// 세 개의 정수를 골라 합을 계산하고, m보다 작거나 같은 경우 최대 합을 갱신
				if (arr[i] + arr[j] + arr[k] <= m 
					&& arr[i] + arr[j] + arr[k] > result)
				{
					result = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	cout << result << '\n'; // 최대 합을 출력
}
