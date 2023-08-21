/*
���� Ž��

������ �� �����

- ������ ���̸� ã�� ������ ���� Ž���� �����Ͽ� ���� H�� �ݺ��ؼ� �����ϸ� �ȴ�.
- '���� �� ���̷� �ڸ��� ������ ������ �� �ִ°�?'�� Ȯ���� �ڿ� ������ ���� ����(��/�ƴϿ�)�� ���� Ž�� ������ ������ �ذ��� �� �ִ�.
- ���ܱ��� ���̴� 0���� 10������� ���� �� �ϳ��̴�.
-- �̷��� ū Ž�� ������ ���� ���� ���� ���� Ž���� ���÷��� �Ѵ�.
*/

#include <bits/stdc++.h>
using namespace std;

// ���� ���� N, ��û�� ���� ���� M
int n, m;
// �� ���� ���� ���� ����
vector<int> arr;

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	// ���� Ž���� ���� �������� ���� ����
	int start = 0;
	int end = 1e9; // ������ ���� ū ���� 10������ �����ϴ��� ���� Ž�� �������� �ڵ� �����ǹǷ� ����ȭ�� �����ϴ�
	// ���� Ž�� ����(�ݺ���)
	int result = 0;
	while (start <= end)
	{
		long long int total = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < n; i++)
		{
			// �߶��� ���� ���� �� ���
			if (arr[i] > mid) total += arr[i] - mid;
		}
		if (total < m) // ���� ���� ������ ���, �� ���� �ڸ��� (���� �κ� Ž��)
		{
			end = mid - 1;
		}
		else // ���� ���� ����� ���, �� �ڸ��� (������ �κ� Ž��)
		{
			result = mid; // �ִ��� �� �߶��� ���� �����̹Ƿ�, ���⿡�� result�� ���
			start = mid + 1;
		}
	}
	cout << result << '\n';
}