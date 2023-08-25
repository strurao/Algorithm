#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int N;
	cin >> N;

	// N번만큼 반복
	for (int i = 1; i <= N; i++) {

		// i행에서는 i개만큼 별을 출력
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		// 해당 행이 출력이 끝났으면 반드시 줄바꿈을 해준다.
		cout << "\n";
	}
	return 0;
}

/*
행을 기준으로 N번만큼 반복하고, i번째 행에서는 i만큼 별을 출력해야한다
그리고 중요한 점은, 해당 줄(행)의 별들을 모두 출력했으면, 반드시 줄바꿈을 해주어야 한다
*/