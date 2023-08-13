#include <iostream>
#include <vector>
using namespace std;

// 기본 dfs 함수 정의
// 그래프에 포함되어 있는 노드의 개수가 8개라고 한다면
bool visited[9];
vector<int> graph[9]; // 인접리스트로 만들 때

void dfs(int x)
{
	visited[x] = true; // 현재 노드를 방문 처리
	cout << x << ' ';
	// 현재 노드와 연결된 다른 노드를 재귀적으로 방문
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

/*
// 기본 dfs에 대한 main()

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

	dfs(1);
}
*/