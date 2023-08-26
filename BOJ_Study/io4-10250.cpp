#include <iostream>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);  // C++의 입출력 버퍼를 C 표준 입출력과 동기화하지 않음
	cin.tie(0);  // cin과 cout의 묶음 해제
	cout.tie(0); // cout의 묶음 해제

	int t;
	int h, w, n;
	int result;
	cin >> t;

	for (int i = 0; i < t; i++) // T 개의 테스트 데이터
	{ 
		cin >> h >> w >> n; // 호텔의 층 수, 각 층의 방 수, 몇 번째 손님

		if (n % h == 0) 
		{
			result = h * 100 + (n / h);
		}
		else 
		{
			result = (n % h) * 100 + (n / h) + 1;
		}
		cout << result << '\n';
	}
}

/*
ACM 호텔 https://www.acmicpc.net/problem/10250
풀이 참고 https://codesyun.tistory.com/60

손님들은 최소로 걷는 것을 선호하기 때문에, 101, 201, 301, ˙˙˙와 같이 h층까지 x01호가 채워진다.
그 후로는 x02호가 다 채워지는 순서로 손님이 채워진다.
*/