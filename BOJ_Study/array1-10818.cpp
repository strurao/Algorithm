// 배열 사용
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

	sort(array, array + N);		// 0 ~ N-1 범위 정렬

	cout << array[0] << " " << array[N - 1];

	return 0;

}

// 배열 미사용
#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {

	ios_base::sync_with_stdio(0);

	// minValue, maxValue의 초기값
	int minValue = 1000001;
	int maxValue = -1000001;

	int N;
	cin >> N;

	int inputValue;
	for (int i = 0; i < N; i++) {
		cin >> inputValue;

		// 입력으로 들어온 값이 minValue보다 작다면 min을 inputValue로 갱신
		if (inputValue < minValue) {
			minValue = inputValue;
		}
		// 입력으로 들어온 값이 maxValue보다 크다면 max를 inputValue로 갱신
		if (inputValue > maxValue) {
			maxValue = inputValue;
		}
	}

	cout << minValue << " " << maxValue;
	return 0;

}