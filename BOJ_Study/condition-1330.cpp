#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;
    // ���׿����ڸ� cout ���� �� ��쿡�� �ϳ� ���� �� ���� ���׿����� �κ��� ��ȣ�� �����־�� �Ѵ�.
    cout << ((A > B) ? ">" : (A < B) ? "<" : "==");
    return 0;
}