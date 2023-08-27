// ���� https://www.acmicpc.net/problem/2798

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++�� ����� ���۸� C ǥ�� ����°� ����ȭ���� ����
	cin.tie(0);  // cin�� cout�� ���� ����
	cout.tie(0); // cout�� ���� ����

	int n, m, result = 0;
	int arr[101] = {};
	cin >> n >> m; // ����ڷκ��� n�� m�� �Է� ����
	for (int i = 0; i < n; i++)
		cin >> arr[i];  // n���� ������ �迭 arr�� �Է� ����

	// 3��ø �ݺ������� �迭 arr���� �� ���� ������ �����ϰ�, �� ���� m���� �۰ų� ���� ��� �ִ� ���� result�� �����Ѵ�
	for (int i = 0; i < n; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			for (int k = j + 1; k < n; k++) 
			{
				// �� ���� ������ ��� ���� ����ϰ�, m���� �۰ų� ���� ��� �ִ� ���� ����
				if (arr[i] + arr[j] + arr[k] <= m 
					&& arr[i] + arr[j] + arr[k] > result)
				{
					result = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	cout << result << '\n'; // �ִ� ���� ���
}
