/*
그리디

곱하기 혹은 더하기 문제

두 수에 대하여 연산을 수행할 때, 
두 수 중에서 하나라도 1 이하인 경우에는 더하며, 두 수가 모두 2 이상인 경우에는 곱하면 정답이다.
*/

#include <bits/stdc++.h>
using namespace std;

string str;

int main()
{
	cin >> str;

	// 첫 번째 문자를 숫자로 변경한 값을 대입
	long long result = str[0] - '0'; // 숫자 문자에서 '0'을 빼서 문자를 해당 정수 값으로 변환합니다. 아스키 코드에서 숫자 문자들은 연속적이므로, 예를 들어 '3' - '0'은 정수 3을 얻게 됩니다.

	for (int i = 1; i < str.size(); i++)
	{
		int num = str[i] - '0';
		if (num <= 1 || result <= 1)
		{
			result += num;
		}
		else
		{
			result *= num;
		}
	}
	cout << result << '\n';
}