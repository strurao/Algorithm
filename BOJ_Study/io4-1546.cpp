// ��� https://www.acmicpc.net/problem/1546
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++�� ����� ���۸� C ǥ�� ����°� ����ȭ���� ����
	cin.tie(0);  // cin�� cout�� ���� ����
	cout.tie(0); // cout�� ���� ����

	int n = 0;
	double r = 0;
	double arr[1001]; // �������� ������񰳼��� 1000���� �۰ų� ���ٰ� ������

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n); // default �� �迭 �������� ���� // quick sort(�� ����)�� ������� �Լ��� �����Ǿ��־�, ��� �ð����⵵�� n log n

	// ���� ū ���� ���� ������ �ε����� ��ġ�ϰ� ��
	for (int i = 0; i < n; i++) {
		r = r + (arr[i] / arr[n - 1]) * 100; // (���� �� ���� = (���� / �ְ� ����) * 100) �� ���� ��
	}

	cout << r / n;
	return 0;
}

/*
�� �� ���� �����ؾ� �� ���� '�Ҽ��� ����'�� �ʿ��ϴٴ� ���̴�. ��, ���� ������ �ƴ� �Ǽ� ���� �� �� ����ϸ� �ȴ�.
sort() ���� : https://blockdmask.tistory.com/178

 [start, end)�� start �����ͺ��� �����Ͽ� end ������ �ٷ� �������� ��ҵ��� �����ϴ� ������ �ǹ��մϴ�. 
 ��, ���� �����ʹ� ���Ե����� �� �����ʹ� ���Ե��� �ʴ� ���� Ư¡�Դϴ�.
*/