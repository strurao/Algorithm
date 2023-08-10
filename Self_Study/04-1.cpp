/*
����

�����¿� ����

�� ������ �䱸���״�� ����� �����ϸ� �Ǵ� �����Դϴ�.
�Ϸ��� ���ɿ� ���� ��ü�� ���ʴ�� �̵���Ų�ٴ� ������ �ùķ��̼� �������ε� �з��Ǹ� ������ �߿��� ��ǥ���� ���� �����̴�.
(�ٸ�, �˰����� ���糪 ���� Ǯ�� ����Ʈ�� ���� �ٸ��� ������ �� �����Ƿ�, 
�ڵ� �׽�Ʈ������ �ùķ��̼�/����/����Ž�� ������ ���� ������ ���� ���ٴ� �����θ� ����սô�.
*/

#include <bits/stdc++.h>
using namespace std;

int n;
string plans;
int x = 1, y = 1;

// L, R, U, D �� ���� �̵� ����
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };
char moveTypes[4] = { 'L','R','U','D' };

int main()
{
	// �ϳ��� ������ ���� �ڿ� �� �ٷ� ������ ���ڿ��� �־����ٰ� �ϸ� �̷��� ���� �Է¹��� �� ���ڿ��� �ޱ� ���� ���۸� ������ �ʿ䰡 �ִ�.
	cin >> n;
	cin.ignore(); // buffer ����
	getline(cin, plans);

	// �̵� ��ȹ�� �ϳ��� Ȯ���ϱ�
	for (int i = 0; i < plans.size(); i++)
	{
		char plan = plans[i]; 
		// �̵� �� ��ǥ ���ϱ�
		int nx = -1, ny = -1;
		for (int j = 0; j < 4; j++)
		{
			if (plan == moveTypes[j])
			{
				nx = x + dx[j];
				ny = y + dy[j];
			}
		}

		// ������ ����� ��� ����
		if (nx<1 || ny<1 || nx>n || ny>n)
			continue;
		// �̵� ����
		x = nx;
		y = ny;
	}
	cout << x << ' ' << y << '\n';
	return 0;
}