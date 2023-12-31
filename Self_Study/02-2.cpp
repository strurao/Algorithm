/*
곱하기 혹은 더하기

각 자리가 숫자 (0부터 9) 로만 이루어진 문자열 S가 주어졌을 때, 왼쪽부터 오른쪽으로 하나씩 모든 숫자를 확인하며
숫자 사이에 '*' 혹은 '+' 연산자를 넣어 결과적으로 만들어질 수 있는 가장 큰 수를 구하는 프로그램을 작성하세요
단 +보다 *를 먼저 계산하는 일반적인 방식과는 달리, 모든 연산은 왼쪽에서부터 순서대로 이루어진다고 가정합니다.
*/ 

#include <bits/stdc++.h>
using namespace std;

string str;

int main()
{
	cin >> str;

	// 첫번째 문자를 숫자로 변경한 값을 대입
	long long result = str[0] - '0';
	for (int i = 1; i < str.size(); i++)
	{
		// 두 수 중에서 하나라도 0 혹은 1 인 경우 곱하기보다는 더하기 수행
		int num = str[i] - '0';
		if (num <= 1 || result <= 1) result += num;
		else result *= num;
	}
	cout << result << '\n';
}