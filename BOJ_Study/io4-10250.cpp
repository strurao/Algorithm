#include <iostream>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);  // C++�� ����� ���۸� C ǥ�� ����°� ����ȭ���� ����
	cin.tie(0);  // cin�� cout�� ���� ����
	cout.tie(0); // cout�� ���� ����

	int t;
	int h, w, n;
	int result;
	cin >> t;

	for (int i = 0; i < t; i++) // T ���� �׽�Ʈ ������
	{ 
		cin >> h >> w >> n; // ȣ���� �� ��, �� ���� �� ��, �� ��° �մ�

		if (n % h == 0) 
		{
			result = h * 100 + (n / h);
		}
		else 
		{
			result = (n % h) * 100 + (n / h) + 1;
		}
		cout << result << '\n';
	}
}

/*
ACM ȣ�� https://www.acmicpc.net/problem/10250
Ǯ�� ���� https://codesyun.tistory.com/60

�մԵ��� �ּҷ� �ȴ� ���� ��ȣ�ϱ� ������, 101, 201, 301, �������� ���� h������ x01ȣ�� ä������.
�� �ķδ� x02ȣ�� �� ä������ ������ �մ��� ä������.
*/