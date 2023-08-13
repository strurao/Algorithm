#include <iostream>
#include <queue>
using namespace std;

// 기본 bfs 함수 정의
// 그래프에 포함되어 있는 노드의 개수가 8개라고 한다면
bool visited[9];
vector<int> graph[9];

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visited[start] = true;  // 현재 노드를 방문 처리

	while (false == q.empty()) // 큐가 빌 때까지 반복
	{
		int x = q.front(); // 큐에서 하나의 원소를 뽑아 출력
		q.pop();
		cout << x << ' ';
		for (int i = 0; i < graph[x].size(); ++i)  // 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
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

/*
// 기본 bfs에 대한 main()

int main(void) {
	// 노드 1에 연결된 노드 정보 저장
	graph[1].push_back(2);
	graph[1].push_back(3);
	graph[1].push_back(8);

	// 노드 2에 연결된 노드 정보 저장
	graph[2].push_back(1);
	graph[2].push_back(7);

	// 노드 3에 연결된 노드 정보 저장
	graph[3].push_back(1);
	graph[3].push_back(4);
	graph[3].push_back(5);

	// 노드 4에 연결된 노드 정보 저장
	graph[4].push_back(3);
	graph[4].push_back(5);

	// 노드 5에 연결된 노드 정보 저장
	graph[5].push_back(3);
	graph[5].push_back(4);

	// 노드 6에 연결된 노드 정보 저장
	graph[6].push_back(7);

	// 노드 7에 연결된 노드 정보 저장
	graph[7].push_back(2);
	graph[7].push_back(6);
	graph[7].push_back(8);

	// 노드 8에 연결된 노드 정보 저장
	graph[8].push_back(1);
	graph[8].push_back(7);

	bfs(1);
}
*/