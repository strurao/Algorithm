// OX퀴즈
#include <iostream>
#include <string>
using namespace std;

int OX(string& s)
{
	int cumulative = 0;
	int sum = 0;

	/*
	for(int i = 0; i < s.length(); i++) {
		char v = s.at(i);
	}
	와 아래의 for-each 문의 의미는 동일하다
	*/
	for (char& v : s) //  string 순회에서 for-each 문을 사용
	{
		if (v == 'O')
		{
			cumulative++;
			sum += cumulative;
		}
		else
		{
			cumulative = 0;
		}
	}
	return sum;
}

int main()
{
	// 입력과 출력이 번갈아가면서 발생하기 때문에 stdio 라이브러리와의 동기화를 끊어주고 입출력을 분리시켜 입출력을 향상시켜보았다.
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		cout << OX(s) << '\n';
	}
	return 0;
}