#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++�� ����� ���۸� C ǥ�� ����°� ����ȭ���� ����
	cin.tie(0);  // cin�� cout�� ���� ����
	cout.tie(0); // cout�� ���� ����

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
���� ū���� ���еǾ�� �ϱ� ������,
�ڵ忡���� x, y, z�� ���ʷ� ��, swap�Ͽ� ���� ū ���� ���̰� z�� �� �� �ֵ��� �ߴ�.
*/