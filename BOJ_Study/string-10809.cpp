#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S; // ���ĺ����� �̷���� �ܾ� S�� �Է¹���

    for (int i = 'a'; i <= 'z'; i++) // �ܾ� ���� a���� z���� ���翩�� üũ
    {
        int ck = 0; // ���ĺ� ���� ���� üũ�ϱ� ���� ���� 0���� ����
        for (int j = 0; j < (int)S.size(); j++) // �ܾ� ���̸�ŭ �ݺ�
        {
            if (S[j] == i) // �ܾ��� ���ĺ��� ���ٸ� �ε��� ��� �� üũ
            {
                cout << j << " ";
                ck = 1;
                break;
            }
        }
        if (ck == 0) cout << -1 << " "; // ���ĺ��� ������ -1 ���
    }

}