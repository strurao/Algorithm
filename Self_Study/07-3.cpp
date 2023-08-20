/*
이진 탐색

떡볶이 떡 만들기

- 적절한 높이를 찾을 때까지 이진 탐색을 수행하여 높이 H를 반복해서 조정하면 된다.
- '현재 이 높이로 자르면 조건을 만족할 수 있는가?'를 확인한 뒤에 조건의 만족 여부(예/아니오)에 따라서 탐색 범위를 좁혀서 해결할 수 있다.
- 절단기의 높이는 0부터 10억까지의 정수 중 하나이다.
-- 이렇게 큰 탐색 범위를 보면 가장 먼저 이진 탐색을 떠올려야 한다.
*/

#include <bits/stdc++.h>
using namespace std;

// 떡의 개수 N, 요청한 떡의 길이 M
int n, m;
// 각 떡의 개별 높이 정보
vector<int> arr;

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	// 이진 탐색을 위한 시작점과 끝점 설정
	int start = 0;
	int end = 1e9; // 가능한 가장 큰 값인 10억으로 설정하더라도 이진 탐색 과정으로 자동 조율되므로 최적화가 가능하다
	// 이진 탐색 수행(반복적)
	int result = 0;
	while (start <= end)
	{
		long long int total = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < n; i++)
		{
			// 잘랐을 때의 떡의 양 계산
			if (arr[i] > mid) total += arr[i] - mid;
		}
		if (total < m) // 떡의 양이 부족한 경우, 더 많이 자르기 (왼쪽 부분 탐색)
		{
			end = mid - 1;
		}
		else // 떡의 양이 충분한 경우, 덜 자르기 (오른쪽 부분 탐색)
		{
			result = mid; // 최대한 덜 잘랐을 때가 정답이므로, 여기에서 result에 기록
			start = mid + 1;
		}
	}
	cout << result << '\n';
}