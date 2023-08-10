#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	// default(descending) priority (내림차순)
	priority_queue<int> queue;

	// ascending priority (오름차순)
	priority_queue<int, vector<int>, greater<int>> minQueue;

	// custom priority (비교함수)
	class cmp {
	public: bool operator() (const pair<int, int> a, const pair<int, int> b)
	{
		// 오름차순
		if (a.second == b.second)
		{
			return a.first > b.first;
		}

		return a.second > b.second;
	}
	};
	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pairQueue;


	/*
	[주의할 점]
	- 우선순위 큐는 기본이 내림차순 우선 -> 가장 큰 수가 루트
	- 오름차순 시에도 less가 아니라 greater를 사용해야 함.
	- 비교함수 사용 시에는 구조체나 클래스 형식으로 operator()를 오버라이딩 해야하며,
	  위와 마찬가지로 부등호가 > 인 경우 오름차순이 됨.
	*/

	return 0;
}