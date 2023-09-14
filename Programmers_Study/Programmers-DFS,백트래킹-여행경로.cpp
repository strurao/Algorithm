#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> answer;
vector<vector<string>> input_tickets;
vector<bool> visited;

void dfs(string start, vector<string>& path, int cnt)
{
	path.push_back(start); // 현재 위치를 경로에 추가

	// 모든 항공권을 사용했을 경우
	if (cnt == input_tickets.size())
	{
		answer = path; // 정답을 현재 경로로 설정
		return;
	}

	// 모든 항공권을 사용하지 않았을 경우
	for (int i = 0; i < input_tickets.size(); i++)
	{
		if (input_tickets[i][0] == start && !visited[i]) // 출발지가 현재 위치이고, 사용하지 않은 항공권인 경우
		{
			visited[i] = true;
			dfs(input_tickets[i][1], path, cnt + 1);
			visited[i] = false; // 백트래킹 원상복구 : 다른 경로로의 탐색을 위해 사용했던 항공권 정보를 초기화한다
			if (!answer.empty()) return; // 정답을 찾으면 더 이상 진행하지 않는다
		}
	}
	path.pop_back(); // 현재 위치를 경로에서 제거 (백트래킹)
}

vector<string> solution(vector<vector<string>> tickets)
{
	input_tickets = tickets;
	visited.resize(input_tickets.size(), false);
	sort(input_tickets.begin(), input_tickets.end()); // 알파벳 순 정렬
	vector<string> path; // 현재 경로를 저장할 벡터
	dfs("ICN", path, 0);
	return answer;
}