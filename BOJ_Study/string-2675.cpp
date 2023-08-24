#include <iostream>
using namespace std;

int main()
{
	int i, j, k, n, r, l;
	string s; // 단어 입력 배열

	cin >> n; // 테스트 케이스 개수를 입력받는다
	for (i = 0; i < n; i++) //테스트 케이스만큼 반복
	{
		cin >> r >> s; // 반복횟수와 단어를 받는다.
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