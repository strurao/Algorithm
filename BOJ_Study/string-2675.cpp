#include <iostream>
using namespace std;

int main()
{
	int i, j, k, n, r, l;
	string s; // �ܾ� �Է� �迭

	cin >> n; // �׽�Ʈ ���̽� ������ �Է¹޴´�
	for (i = 0; i < n; i++) //�׽�Ʈ ���̽���ŭ �ݺ�
	{
		cin >> r >> s; // �ݺ�Ƚ���� �ܾ �޴´�.
		l = s.length();
		for (j = 0; j < l; j++)
		{
			for (k = 0; k < r; k++)
			{
				cout << s[j];
			}
		}
		cout << '\n';
	}
	return 0;
}