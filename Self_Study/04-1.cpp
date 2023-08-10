/*
구현

상하좌우 문제

이 문제는 요구사항대로 충실히 구현하면 되는 문제입니다.
일련의 명령에 따라서 개체를 차례대로 이동시킨다는 점에서 시뮬레이션 유형으로도 분류되며 구현이 중요한 대표적인 문제 유형이다.
(다만, 알고리즘 교재나 문제 풀이 사이트에 따라서 다르게 일컬을 수 있으므로, 
코딩 테스트에서의 시뮬레이션/구현/완전탐색 유형은 서로 유사한 점이 많다는 정도로만 기억합시다.
*/

#include <bits/stdc++.h>
using namespace std;

int n;
string plans;
int x = 1, y = 1;

// L, R, U, D 에 따른 이동 방향
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };
char moveTypes[4] = { 'L','R','U','D' };

int main()
{
	// 하나의 정수가 들어온 뒤에 한 줄로 구성된 문자열이 주어진다고 하면 이렇게 정수 입력받은 후 문자열을 받기 전에 버퍼를 지워줄 필요가 있다.
	cin >> n;
	cin.ignore(); // buffer 비우기
	getline(cin, plans);

	// 이동 계획을 하나씩 확인하기
	for (int i = 0; i < plans.size(); i++)
	{
		char plan = plans[i]; 
		// 이동 후 좌표 구하기
		int nx = -1, ny = -1;
		for (int j = 0; j < 4; j++)
		{
			if (plan == moveTypes[j])
			{
				nx = x + dx[j];
				ny = y + dy[j];
			}
		}

		// 공간을 벗어나는 경우 무시
		if (nx<1 || ny<1 || nx>n || ny>n)
			continue;
		// 이동 수행
		x = nx;
		y = ny;
	}
	cout << x << ' ' << y << '\n';
	return 0;
}