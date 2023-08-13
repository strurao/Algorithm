/*
DFS/BFS

음료수 얼려 먹기

dummy 개수 세기~
이 문제는 DFS 혹은 BFS 로 해결할 수 있다.

DFS를 활용하는 알고리즘:
1) 특정한 지점의 주변 상,하,좌,우를 살펴본 뒤에 주변 지점 중에서 값이 '0'이면서
아직 방문하지 않은 지점이 있다면 해당 지점을 방문한다.
2) 방문한 지점에서 다시 상,하,좌,우를 살펴보면서 방문을 진행하는 과정을 반복하면,
연결된 모든 지점을 방문할 수 있다.
3) 모든 노드에 대하여 1~2번의 과정을 반복하며, 방문하지 않은 지점의 수를 카운트한다.
*/

#include<bits/stdc++.h>
using namespace std;

int n, m; // 세로 길이 n, 가로 길이 m
int graph[1001][1001];

// DFS로 특정 노드를 방문하고 연결된 모든 노드들도 방문
bool dfs(int x, int y)
{
	// 주어진 범위를 벗어나는 경우에는 즉시 종료
	if (x <= -1 || x >= n || y <= -1 || y >= m)
		return false;

	// 현재 노드를 아직 방문하지 않았다면
	if (graph[x][y] == 0)
	{
		// 해당 노드 방문 처리
		graph[x][y] = 1;

		// 상하좌우의 위치들도 모두 재귀적으로 호출
		dfs(x - 1, y);
		dfs(x, y - 1);
		dfs(x + 1, y);
		dfs(x, y + 1);
		return true;
	}
	return false;
}

int main()
{
	// n, m을 공백을 기준으로 구분하여 입력 받기
	cin >> n >> m;
	// 2차원 배열의 맵 정보를 입력 받기
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%1d", &graph[i][j]);
		}
	}
	int result = 0;
	// TODO
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			// 현재 위치에서 DFS 수행
			if (dfs(i, j))
			{
				result += 1;
			}
		}
	}
	cout << result << '\n';
}