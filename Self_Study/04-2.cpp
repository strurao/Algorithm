/*
����

�ð� ����

������ ��츦 �ϳ��� ����, �������� ����Ž��(Brute Forcing: ������ ����� ���� ��� �˻��غ��� Ž�� ���)�� ������ �������μ� ���������̱⵵ �ϴ�.
*/

#include <bits/stdc++.h>
using namespace std;

int n, cnt; // �Է°��� ��°� ����

// Ư���� �ð� �ȿ� 3 �� ���ԵǾ� �ִ����� ����
bool check(int h, int m, int s)
{
	if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3) // 30�ô� �����ϱ� �� ������ % ���길 ����
		return true;
	return false;
}

int main()
{
	cin >> n;
	
	// i(��) j(��) k(��)
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				if (check(i, j, k)) cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}