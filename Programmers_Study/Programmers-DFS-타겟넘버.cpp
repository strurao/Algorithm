// https://school.programmers.co.kr/learn/courses/30/lessons/43165
#include<vector>
using namespace std;

// Ÿ�� �ѹ��� ����� ����� �� (���������� ������ ���Դ�)
int answer = 0;

// vector�� �Ѱ��ٶ� ���۷����� �Ѱ�����Ѵ�. copy�ϸ鼭 �ð����⵵�� O(N)���� �þ�� ����
void dfs(vector<int>& numbers, int& target, int sum, int index) {
	// ���� ����
	if (index == numbers.size()) {
		if (sum == target) {
			answer++;
		}
		// ���� ���� ���� return
		return;
	}
	// ���� ������ �������������� ��� Ž��
	dfs(numbers, target, sum + numbers[index], index + 1);
	dfs(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
	dfs(numbers, target, 0, 0);
	return answer;
}