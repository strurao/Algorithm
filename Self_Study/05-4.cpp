/*
DFS/BFS

미로 탈출

BFS는 시작 지점에서 가까운 노드부터 차례대로 그래프의 모든 노드를 탐색한다.
상 하 좌 우로 연결된 모든 노드로의 거리가 1로 동일하다
따라서 (1,1)지점부터 BFS를 수행하여 모든 노드의 최단 거리 값을 기록하면 해결 가능하다.
*/

#include<bits/stdc++.h>
using namespace std;

int n, m; // n:행(가로줄개수)(y), m:열(세로줄개수)(x)
int graph[201][201];

// 이동할 네 가지 방향 정의 (상, 하, 좌, 우) 
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int bfs(int x, int y)
{
    // 큐(Queue) 구현을 위해 queue 라이브러리 사용 
    queue<pair<int, int> > q; // pair 를 이용함으로써 별도의 구조체나 클래스를 정의하지 않고도 데이터의 쌍을 간단히 표현 가능.
    q.push({ x,y });
    
    // 큐가 빌 때까지 반복하기
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // 현재 위치에서 4가지 방향으로의 위치 확인
        for (int i = 0; i < 4; i++) 
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // 미로 찾기 공간을 벗어난 경우 스킵
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            // 벽인 경우 스킵
            if (graph[nx][ny] == 0) continue;
            // 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            if (graph[nx][ny] == 1) 
            {
                // 이전위치에서 1을 더한 거리만큼 현재 확인하고 있는 그 다음위치에 최단거리값을 설정
                graph[nx][ny] = graph[x][y] + 1;
                q.push({ nx, ny });
            }
        }
    }

    // 가장 오른쪽 아래까지의 최단거리반환
    return graph[n - 1][m - 1];
}

int main(void) {
    // N, M을 공백을 기준으로 구분하여 입력 받기
    cin >> n >> m;
    // 2차원 리스트의 맵 정보 입력 받기
    for (int i = 0; i < n; i++) { // 행을 중심으로
        for (int j = 0; j < m; j++) { // 열을 탐색
            scanf("%1d", &graph[i][j]);
        }
    }
    
    // BFS를 수행한 결과 출력
    cout << bfs(0, 0) << '\n';
    return 0;
}