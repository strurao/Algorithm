// �Ӹ���Ҽ� https://www.acmicpc.net/problem/1259

#include <iostream>
#include <string>
#include <algorithm> //reverse �Լ��� �ִ� �������
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++�� ����� ���۸� C ǥ�� ����°� ����ȭ���� ����
	cin.tie(0);  // cin�� cout�� ���� ����
	cout.tie(0); // cout�� ���� ����

	string N;

	while (N != "0")
	{
		cin >> N;
		string buf = N;
		reverse(N.begin(), N.end());
		if (N == "0") break; // 0�� reverser�ϸ� 0���� ����
		else if (N == buf) cout << "yes\n";
		else cout << "no\n";
	}
}