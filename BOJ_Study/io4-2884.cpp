// �˶��ð�
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);  // C++�� ����� ���۸� C ǥ�� ����°� ����ȭ���� ����
	cin.tie(NULL);  // cin�� cout�� ���� ����
	cout.tie(NULL); // cout�� ���� ����
	int hour, min;
	cin >> hour >> min; // �ð�, �� �Է�
	
	if (min < 45)
	{
		min += 15;
		hour -= 1;
		if (hour < 0)
			hour = 23;
	}
	else
	{
		min -= 45;
	}

	cout << hour << " " << min << '\n';
}