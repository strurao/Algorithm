// https://school.programmers.co.kr/learn/courses/30/lessons/43162

#include<vector>
using namespace std;

int visited[204];

void dfs(int current_computer, int n, vector<vector<int>> & computers) {
	// visited �� current_computer��° ��ǻ�͸� �湮�ߴٰ� ǥ���ϱ�
	visited[current_computer] = 1;
	for (int i = 0; i < n; i++) {
		// current_computer�� ����� ��ǻ�͵� Ž�� ����
		if (visited[i] == 0 && computers[current_computer][i] == 1) {
			dfs(i, n, computers);
		}
	}
}

// ��ǻ���� ���� n, ���ῡ ���� ������ ��� 2���� �迭 computers
int solution(int n, vector<vector<int>> computers) {
	int answer = 0;

	for (int i = 0; i < n; i++) {
		// ���� �˻����� ���� ��ǻ���� �� Ž�� ����
		if (visited[i] == 0) {
			dfs(i, n, computers);
			// ��������� ȣ���� dfs�Լ��� ����� ���ƿ� ���� connected component (����� �׷���)
			answer++;
		}
	}
	return answer;
}