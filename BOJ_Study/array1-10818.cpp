// �迭 ���
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[]) {

	ios_base::sync_with_stdio(0);

	int N;
	cin >> N;

	int array[1000001];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	sort(array, array + N);		// 0 ~ N-1 ���� ����

	cout << array[0] << " " << array[N - 1];

	return 0;

}

// �迭 �̻��
#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {

	ios_base::sync_with_stdio(0);

	// minValue, maxValue�� �ʱⰪ
	int minValue = 1000001;
	int maxValue = -1000001;

	int N;
	cin >> N;

	int inputValue;
	for (int i = 0; i < N; i++) {
		cin >> inputValue;

		// �Է����� ���� ���� minValue���� �۴ٸ� min�� inputValue�� ����
		if (inputValue < minValue) {
			minValue = inputValue;
		}
		// �Է����� ���� ���� maxValue���� ũ�ٸ� max�� inputValue�� ����
		if (inputValue > maxValue) {
			maxValue = inputValue;
		}
	}

	cout << minValue << " " << maxValue;
	return 0;

}