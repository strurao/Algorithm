#include<iostream>
#include<queue>
#include<algorithm>
#include<tuple>
using namespace std;

const int INF = 987654321;
char a[1004][1004]; // 입력으로 주어지는 미로맵
int fire_check[1004][1004], person_check[1004][1004];
int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };
int n, m, sx, sy, ret, x, y;

// 오버플로우 체크
bool in(int a, int b) {
	return 0 <= a && a < n && 0 <= b && b < m;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	queue<pair<int, int>> q;
	cin >> n >> m;
	fill(&fire_check[0][0], &fire_check[0][0] + 1004 * 1004, INF);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] = 'F') {
				fire_check[i][j] = 1;
				q.push({ i,j });
			}
			else if (a[i][j] == 'J') {
				sy = i;
				sx = j;
			}
		}
	}

	// 불은 각 지점에서 네 방향으로 확산된다
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (!in(ny, nx)) continue;
			if (fire_check[ny][nx] != INF || a[ny][nx] == '#') continue;
			fire_check[ny][nx] = fire_check[y][x] + 1;
			q.push({ ny,nx });
		}
	}

	person_check[sy][sx] = 1;
	q.push({ sy,sx });
	while (q.size()){
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		// 지훈이는 미로의 가장자리에 접한 공간에서 탈출할 수 있다
		if (x == m - 1 || y == n - 1 || x == 0 || y == 0) {
			ret = person_check[y][x];
			break;
		}

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (!in(ny, nx)) continue;
			if (person_check[ny][nx] || a[ny][nx] == '#') continue;
			// 불이 지훈이보다 빠르거나 같다면 지훈이는 갈 수 없다
			if (fire_check[ny][nx] <= person_check[y][x] + 1) continue;
			// 지훈이가 갈 수 있다면
			person_check[ny][nx] = person_check[y][x] + 1;
			q.push({ ny,nx });
		}
	}
	if (ret != 0) cout << ret << '\n';
	else cout << "IMPOSSIBLE\n";
	return 0;
}