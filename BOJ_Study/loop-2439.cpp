#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

	int N;

	cin >> N;

	for (int row = 1; row <= N; row++) {

		// ������ N - row�� ��ŭ ����Ѵ�.
		for (int i = 0; i < N - row; i++) {
			cout << ' ';
		}

		// ���� row����ŭ ����Ѵ�.
		for (int i = 0; i < row; i++) {
			cout << '*';
		}

		// �� ���� ����� ������ ����(�ٹٲ�)
		cout << '\n';
	}
	return 0;
}

/*
�� �� ������ ��� ���� ������ �� ��� - 1 ������ �ٸ� ���� �ٷ� ������ ���� ����� �� ���� ��´ٴ� ���̴�.
�̷��� �η��� �ݺ������� Ǫ�� ������ ��ü�� ���� �� �������� ������ �� �ֱ� ������ �������� �����غ��� ���� ������ Ǫ�µ� �ξ� ���� �� ���̴�.
*/