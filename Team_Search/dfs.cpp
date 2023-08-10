#include <iostream>
#include <vector>
using namespace std;

// �⺻ dfs
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

// dfs�� ������ ����
// N x M �迭���� 1�� ĭ����, 0�� ����
// ĭ���̷� �������� ������ ������?
int n, m;
int visited[1001][1001];
bool dfs(int x, int y)
{
	// ���� üũ
	if (x < 0 || y < 0 || n <= x || m <= y)
	{
		return false;
	}

	if (0 == visited[x][y])
	{
		// �湮 ó��
		visited[x][y] = 1;

		// �����¿� ����� ȣ��
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
			// ó�� �湮�ϴ� ������ count ����
			if (true == dfs(i, j))
			{
				++result;
			}
		}
	}

	cout << result;

	return 0;
}