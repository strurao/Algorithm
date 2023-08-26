// OX����
#include <iostream>
#include <string>
using namespace std;

int OX(string& s)
{
	int cumulative = 0;
	int sum = 0;

	/*
	for(int i = 0; i < s.length(); i++) {
		char v = s.at(i);
	}
	�� �Ʒ��� for-each ���� �ǹ̴� �����ϴ�
	*/
	for (char& v : s) //  string ��ȸ���� for-each ���� ���
	{
		if (v == 'O')
		{
			cumulative++;
			sum += cumulative;
		}
		else
		{
			cumulative = 0;
		}
	}
	return sum;
}

int main()
{
	// �Է°� ����� �����ư��鼭 �߻��ϱ� ������ stdio ���̺귯������ ����ȭ�� �����ְ� ������� �и����� ������� �����Ѻ��Ҵ�.
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		cout << OX(s) << '\n';
	}
	return 0;
}