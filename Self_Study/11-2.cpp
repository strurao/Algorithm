/*
�׸���

���ϱ� Ȥ�� ���ϱ� ����

�� ���� ���Ͽ� ������ ������ ��, 
�� �� �߿��� �ϳ��� 1 ������ ��쿡�� ���ϸ�, �� ���� ��� 2 �̻��� ��쿡�� ���ϸ� �����̴�.
*/

#include <bits/stdc++.h>
using namespace std;

string str;

int main()
{
	cin >> str;

	// ù ��° ���ڸ� ���ڷ� ������ ���� ����
	long long result = str[0] - '0'; // ���� ���ڿ��� '0'�� ���� ���ڸ� �ش� ���� ������ ��ȯ�մϴ�. �ƽ�Ű �ڵ忡�� ���� ���ڵ��� �������̹Ƿ�, ���� ��� '3' - '0'�� ���� 3�� ��� �˴ϴ�.

	for (int i = 1; i < str.size(); i++)
	{
		int num = str[i] - '0';
		if (num <= 1 || result <= 1)
		{
			result += num;
		}
		else
		{
			result *= num;
		}
	}
	cout << result << '\n';
}