#include <iostream>
#include <queue>
using namespace std;

// 기본 bfs
bool visited[9];
vector<int> graph[9];

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (false == q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for (int i = 0; i < graph[x].size(); ++i)
		{
			int y = graph[x][i];
			if (false == visited[y])
			{
				q.push(y);
				visited[y] = true;
			}
		}
	}
}

// bfs를 응용한 문제
// N x M 배열에서 1은 벽, 0은 길
// (1,1)에서 시작하여 (n,m)까지의 최소거리는?
int n, m;
int graph[201][201];

// 이동할 4가지 방향 정의 (상, 하, 좌, 우)
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int bfs(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));

	while (false == q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		// 현재 위치에서 4가지 방향 확인
		for (int i = 0; i < 4; ++i)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			// 범위를 넘어간 경우
			if (nx < 0 || ny < 0 || n <= nx || m <= ny)
			{
				continue;
			}

			// 벽인 경우
			if (0 == graph[nx][ny])
			{
				continue;
			}

			// 첫 방문한 경우 최단거리 기록
			if (1 == graph[nx][ny])
			{
				graph[nx][ny] = graph[x][y] + 1;
				q.push(make_pair(nx, ny));
			}
		}
	}

	// 도착 지점 최단거리 반환
	return graph[n - 1][m - 1];
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

	cout << bfs(0, 0);
	return 0;
}