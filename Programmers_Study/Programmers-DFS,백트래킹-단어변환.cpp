// https://school.programmers.co.kr/learn/courses/30/lessons/43163

#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// ��ȯ �ܰ��� �ּҰ��� ���ؾ��ϹǷ�, �ʱⰪ���� �ִ밪�� �־��ش�. words �迭�� 50�� ������ �ܾ�� �̷���� �ִٰ� �Ͽ����Ƿ�, �ܾ��� ��ȯ ������ �ִ� 50�̴�.
int answer = 50;
bool visited[50];

// �ٸ� ���ڰ� 1������ Ȯ���ϴ� �Լ�
bool checkDiff(string a, string b) {
	int dif_cnt = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) {
			dif_cnt++;
		}
	}
	// �ٸ� ���ڰ� 1���� ��
	if (dif_cnt == 1) {
		return true;
	}
	// �ٸ� ���ڰ� 1���� �ƴ� ��
	return false;
}

void dfs(string begin, string target, vector<string>& words, int step) {
	// step�� ������ ã�� answer���� ũ�� Ž���� �ʿ䰡 ����
	if (answer <= step) return;
	if (begin == target) {
		answer = min(answer, step); // �����س����鼭 answer�� �׻� �ּҰ��� �����Ѵ�
		return;
	}

	for (int i = 0; i < words.size(); i++) {
		// �Ѱ��� ���ڸ� �ٸ���, �湮�� �� ���� �ܾ��� Ž���� ����
		if (checkDiff(begin, words[i]) && !visited[i] ){
			visited[i] = true;
			// �� �ܾ���� �ٽ� Ž�� ����. �ܰ谡 �ϳ� �߰��Ǿ����Ƿ� step+1�� ���ڷ� �ѱ��
			dfs(words[i], target, words, step + 1);
			// dfs ���ȣ�� ����Ǿ� ����� ���ƿ���, ��Ʈ��ŷ�Ͽ� �����б������� �ٽ� Ž��
			visited[i] = false;
		}
	}
	return;
}

int solution(string begin, string target, vector<string> words) {
	dfs(begin, target, words, 0);
	// Ž�� �� target ���ڿ��� ������ ������ ��
	if (answer == 50) return 0;
	return answer;
}
