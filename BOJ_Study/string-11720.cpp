#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cin >> n; // n�� ������ ���� N�� �Է¹���
    string a; // ���� ���ڸ� ������ �迭 ����
    cin >> a; // ���� ���ڸ� a�� ����
    // sum = 0; // ������ ���� ������ ����, �ʱⰪ 0
    for (i = 0; i < n; i++) sum += a[i] - '0'; // ���� ������ �ƽ�Ű�ڵ� ������ '0'�� �ƽ�Ű�ڵ� ���� ���ָ� ���ڰ� ��
    cout << sum; // ���� ���
    return 0;
}