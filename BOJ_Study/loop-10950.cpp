#include <iostream>

using namespace std;

int main() {
	int T, A, B;

	cin >> T; // �׽�Ʈ ���̽�

	// �׽�Ʈ ���̽���ŭ �ݺ�
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}
	return 0;
}