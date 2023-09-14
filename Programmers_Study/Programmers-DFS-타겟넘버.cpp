// https://school.programmers.co.kr/learn/courses/30/lessons/43165
#include<vector>
using namespace std;

// 타겟 넘버를 만드는 방법의 수 (전역변수로 가지고 나왔다)
int answer = 0;

// vector를 넘겨줄때 레퍼런스로 넘겨줘야한다. copy하면서 시간복잡도가 O(N)으로 늘어나기 때문
void dfs(vector<int>& numbers, int& target, int sum, int index) {
	// 종료 조건
	if (index == numbers.size()) {
		if (sum == target) {
			answer++;
		}
		// 같지 않을 때도 return
		return;
	}
	// 종료 조건이 만족되지않으면 계속 탐색
	dfs(numbers, target, sum + numbers[index], index + 1);
	dfs(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
	dfs(numbers, target, 0, 0);
	return answer;
}