/*
����

���ڿ� ������

�䱸���״�� ����� �����ϸ� �ȴ�.
���ڿ��� �ԷµǾ��� �� ���ڸ� �ϳ��� Ȯ���Ѵ�.
- ������ ��� ���� �հ踦 ����Ѵ�.
- ���ĺ��� ��� ������ ����Ʈ�� �����Ѵ�.
��������� ����Ʈ�� ����� ���ĺ��� ������ ����ϰ�, �հ踦 �ڿ� �ٿ� ����ϸ� �����̴�.
*/

#include <bits/stdc++.h>
using namespace std;

string str;
vector<char> result;
int value = 0;

int main()
{
	cin >> str;
	// ���ڸ� �ϳ��� Ȯ���ϸ�
	for (int i = 0; i < str.size(); i++)
	{
		// ���ĺ��� ��� ��� ����Ʈ�� ����
		if (isalpha(str[i]))
		{
			result.push_back(str[i]);
		}
		// ���ڴ� ���� ���ϱ�
		else
		{
			value += str[i] - '0';
		}
	}

	// ���ĺ��� ������������ ����
	sort(result.begin(), result.end());
	// ���ĺ��� ���ʴ�� ���
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
	}
	// ���ڰ� �ϳ��� �����ϴ� ��� ���� �ڿ� ���
	if (value != 0)cout << value;
	cout << '\n';
}