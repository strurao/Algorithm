#include <iostream>
#include <vector>
using namespace std;

// 기본 dfs
bool visited[9];
vector<int> graph[9];

void dfs(int x)
{
	visited[x] = true;
	cout << x << ' ';
	for (int i = 0; i < graph[x].size(); ++i)
	{
		int y = graph[x][i];
		if (false == visited[y])
		{
			dfs(y);
		}
	}
}

// dfs를 응용한 문제
// N x M 배열에서 1은 칸막이, 0은 공간
// 칸막이로 나눠지는 구간의 개수는?
int n, m;
int visited[1001][1001];
bool dfs(int x, int y)
{
	// 범위 체크
	if (x < 0 || y < 0 || n <= x || m <= y)
	{
		return false;
	}

	if (0 == visited[x][y])
	{
		// 방문 처리
		visited[x][y] = 1;

		// 상하좌우 재귀적 호출
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
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf("%1d", &graph[i][j]);

		}
	}

	int result = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			// 처음 방문하는 구역만 count 측정
			if (true == dfs(i, j))
			{
				++result;
			}
		}
	}

	cout << result;

	return 0;
}