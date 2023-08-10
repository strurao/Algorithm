/*
����

�ս��� ����Ʈ ����

�������� �ùķ��̼�, ����Ž��, 2������ǥ�� �̿��ϴ� ���� ���� �����̴�.
�䱸���״�� ����� �����ϸ� �Ǵ� �����̴�. 
����Ʈ�� 8���� ��θ� �ϳ��� Ȯ���ϸ� �� ��ġ�� �̵��� �������� Ȯ���Ѵ�.
*/

#include <bits/stdc++.h>
using namespace std;

string inputData;

/*
����Ʈ�� �̵��� �� �ִ� 8���� ���� ����
�Ʒ�,�������� �����, ��,������ �������� ������ ����̴�

     -r
 -c      +c
     +r

*/
int dx[] = { -2,-1,1,2,2,1,-1,-2 }; // �� r
int dy[] = { -1,-2,-2,-1,1,2,2,1 }; // �� c

int main()
{
	cin >> inputData; // �Է� �� : a1 (������ �򰥸���� �������� ���°ɱ�?)
	int row = inputData[1] - '0'; // ��
	int column = inputData[0] - 'a' + 1; // ��

	// 8���� ���⿡ ���Ͽ� �� ��ġ�� �̵��� �������� Ȯ��
	int result = 0;
	for (int i = 0; i < 8; i++)
	{
		// �̵��ϰ��� �ϴ� ��ġ Ȯ��
		int nextRow = row + dx[i];
		int nextColunm = column + dy[i];
		// �ش� ��ġ�� �̵��� �����ϴٸ� ī��Ʈ ����
		if (nextRow >= 1 && nextRow <= 8 && nextColunm >= 1 && nextColunm <= 8)
		{
			result += 1;
		}
	}
	cout << result << '\n';
	return 0;
}