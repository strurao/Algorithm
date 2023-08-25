#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

	int N;

	cin >> N;

	for (int row = 1; row <= N; row++) {

		// 공백은 N - row개 만큼 출력한다.
		for (int i = 0; i < N - row; i++) {
			cout << ' ';
		}

		// 별은 row개만큼 출력한다.
		for (int i = 0; i < row; i++) {
			cout << '*';
		}

		// 한 행의 출력이 끝나면 개행(줄바꿈)
		cout << '\n';
	}
	return 0;
}

/*
이 번 문제의 경우 직전 문제인 별 찍기 - 1 문제와 다른 점이 바로 공백을 먼저 출력한 뒤 별을 찍는다는 것이다.
이러한 부류의 반복문으로 푸는 문제는 대체로 거의 다 수식으로 정리할 수 있기 때문에 수식으로 정리해보는 것이 문제를 푸는데 훨씬 수월 할 것이다.
*/