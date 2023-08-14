/*
����

�� �迭�� ���� ��ü

- �ٽ� ���̵��: �Ź� �迭 A���� ���� ���� ���Ҹ� ���, �迭 B���� ���� ū ���ҿ� ��ü�Ѵ�.
- ���� ���� �迭 A�� B�� �־����� A�� ���Ͽ� �������� �����ϰ�, B�� ���Ͽ� �������� �����Ѵ�.
- ���Ŀ� �� �迭�� ���Ҹ� ù ��° �ε������� ���ʷ� Ȯ���ϸ鼭 A�� ���Ұ� B�� ���Һ��� ���� ������ ��ü�� ����.
*/

#include<bits/stdc++.h>
using namespace std;

int n; // �迭 A, B�� ���� ����
int k; // �ִ� k���� �ٲ�ġ�� ������ �����Ѵ�
vector<int> a, b;

bool compare(int x, int y) // ������ ���� �� ū ��쿡 ���� �켱������ �������� �ؼ� �������� ������ �ϵ��� �Ѵ�.
{
	return x > y;
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		b.push_back(x);
	}
	sort(a.begin(), a.end()); // �Ϲ����� �������� ������ ����
	sort(b.begin(), b.end(), compare); // �������� ������ ����
	int result = 0;
	for (int i = 0; i < k; i++)
	{
		if (a[i] < b[i]) swap(a[i], b[i]);
		else break;
	}
	for (int i = 0; i < n; i++)
	{
		result += a[i];
	}
	cout << result << '\n';
	return 0;
}