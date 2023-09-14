// https://school.programmers.co.kr/learn/courses/30/lessons/43162

#include<vector>
using namespace std;

int visited[204];

void dfs(int current_computer, int n, vector<vector<int>> & computers) {
	// visited 에 current_computer번째 컴퓨터를 방문했다고 표시하기
	visited[current_computer] = 1;
	for (int i = 0; i < n; i++) {
		// current_computer와 연결된 컴퓨터들 탐색 시작
		if (visited[i] == 0 && computers[current_computer][i] == 1) {
			dfs(i, n, computers);
		}
	}
}

// 컴퓨터의 개수 n, 연결에 대한 정보가 담긴 2차원 배열 computers
int solution(int n, vector<vector<int>> computers) {
	int answer = 0;

	for (int i = 0; i < n; i++) {
		// 아직 검사하지 않은 컴퓨터일 때 탐색 시작
		if (visited[i] == 0) {
			dfs(i, n, computers);
			// 재귀적으로 호출한 dfs함수가 여기로 돌아올 때가 connected component (연결된 그래프)
			answer++;
		}
	}
	return answer;
}