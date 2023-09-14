// https://school.programmers.co.kr/learn/courses/30/lessons/1844

#include<vector>
#include<iostream>
#include<queue>
using namespace std;

int check[101][101];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

int solution(vector<vector<int>> maps)
{
	int n, m;
	n = maps.size();
	m = maps[0].size();
	queue<pair<int, int>> q;

	// 출발지는 예약 작업을 할 수 없고 바로 방문해야 하니 미리 작업
	q.push(make_pair(0, 0)); // 큐에 넣기
	check[0][0]; // 예약 과정
	
	while (!q.empty()) { // 꼭 체크해주기
		// 방문
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		// 예약: 방문한 곳을 기준 시계방향으로 예약하기
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			// 예약 가능한지를 체크
			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (check[nx][ny] == false && maps[nx][ny] > 0) {
					check[nx][ny] = true;
					maps[nx][ny] = maps[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}

	int answer = 0;
	if (maps[n - 1][m - 1] == 1) {
		answer = -1; 
	}
	else {
		answer = maps[n - 1][m - 1];
	}
	return answer;
}