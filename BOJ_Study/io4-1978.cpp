// �Ҽ�ã�� https://www.acmicpc.net/problem/1978

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++�� ����� ���۸� C ǥ�� ����°� ����ȭ���� ����
	cin.tie(0);  // cin�� cout�� ���� ����
	cout.tie(0); // cout�� ���� ����

	int N, result = 0;
	int temp, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		for (int div = 1; div <= temp; div++) {
			if (temp % div == 0)
				cnt++;
		}
		if (cnt == 2)	//temp�� �Ҽ�
			result++;
		cnt = 0;
	}
	cout << result << '\n';
}