// https://school.programmers.co.kr/learn/courses/30/lessons/43163

#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// 변환 단계의 최소값을 구해야하므로, 초기값으로 최대값을 넣어준다. words 배열은 50개 이하의 단어로 이루어져 있다고 하였으므로, 단어의 변환 과정은 최대 50이다.
int answer = 50;
bool visited[50];

// 다른 문자가 1개인지 확인하는 함수
bool checkDiff(string a, string b) {
	int dif_cnt = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) {
			dif_cnt++;
		}
	}
	// 다른 문자가 1개일 때
	if (dif_cnt == 1) {
		return true;
	}
	// 다른 문자가 1개가 아닐 때
	return false;
}

void dfs(string begin, string target, vector<string>& words, int step) {
	// step이 이전에 찾은 answer보다 크면 탐색할 필요가 없다
	if (answer <= step) return;
	if (begin == target) {
		answer = min(answer, step); // 갱신해나가면서 answer는 항상 최소값을 유지한다
		return;
	}

	for (int i = 0; i < words.size(); i++) {
		// 한개의 문자만 다르고, 방문한 적 없는 단어라면 탐색을 시작
		if (checkDiff(begin, words[i]) && !visited[i] ){
			visited[i] = true;
			// 그 단어부터 다시 탐색 시작. 단계가 하나 추가되었으므로 step+1을 인자로 넘긴다
			dfs(words[i], target, words, step + 1);
			// dfs 재귀호출 종료되어 여기로 돌아오면, 백트래킹하여 다음분기점부터 다시 탐색
			visited[i] = false;
		}
	}
	return;
}

int solution(string begin, string target, vector<string> words) {
	dfs(begin, target, words, 0);
	// 탐색 후 target 문자열을 만나지 못했을 때
	if (answer == 50) return 0;
	return answer;
}
