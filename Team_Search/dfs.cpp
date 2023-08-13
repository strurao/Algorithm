#include <iostream>
#include <vector>
using namespace std;

// �⺻ dfs �Լ� ����
// �׷����� ���ԵǾ� �ִ� ����� ������ 8����� �Ѵٸ�
bool visited[9];
vector<int> graph[9]; // ��������Ʈ�� ���� ��

void dfs(int x)
{
	visited[x] = true; // ���� ��带 �湮 ó��
	cout << x << ' ';
	// ���� ���� ����� �ٸ� ��带 ��������� �湮
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

/*
// �⺻ dfs�� ���� main()

int main(void) {
	// ��� 1�� ����� ��� ���� ����
	graph[1].push_back(2);
	graph[1].push_back(3);
	graph[1].push_back(8);

	// ��� 2�� ����� ��� ���� ����
	graph[2].push_back(1);
	graph[2].push_back(7);

	// ��� 3�� ����� ��� ���� ����
	graph[3].push_back(1);
	graph[3].push_back(4);
	graph[3].push_back(5);

	// ��� 4�� ����� ��� ���� ����
	graph[4].push_back(3);
	graph[4].push_back(5);

	// ��� 5�� ����� ��� ���� ����
	graph[5].push_back(3);
	graph[5].push_back(4);

	// ��� 6�� ����� ��� ���� ����
	graph[6].push_back(7);

	// ��� 7�� ����� ��� ���� ����
	graph[7].push_back(2);
	graph[7].push_back(6);
	graph[7].push_back(8);

	// ��� 8�� ����� ��� ���� ����
	graph[8].push_back(1);
	graph[8].push_back(7);

	dfs(1);
}
*/