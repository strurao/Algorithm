#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++의 입출력 버퍼를 C 표준 입출력과 동기화하지 않음
	cin.tie(0);  // cin과 cout의 묶음 해제
	cout.tie(0); // cout의 묶음 해제

	while (1) {
		int x, y, z;
		int temp = 0;
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			return 0;

		if (x > y) {
			temp = y;
			y = x;
			x = temp;
		}
		if (y > z) {
			temp = z;
			z = y;
			y = temp;
		}

		if (z * z == x * x + y * y)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}

/*
가장 큰변이 구분되어야 하기 때문에,
코드에서는 x, y, z를 차례로 비교, swap하여 가장 큰 변의 길이가 z에 올 수 있도록 했다.
*/