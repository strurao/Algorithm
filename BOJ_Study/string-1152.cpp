/*
문자열에서 단어는 공백문자로 구분되므로 공백문자의 개수에 +1을 해주면 단어개수가 된다.
주의할 것은 첫글자와 마지막 글자의 공백은 무시해야 한다.
처음과 마지막 공백은 언어에 따라 trim 함수가 지원되나, 여기서는 루프를 돌려 직접 처리하도록 구현했다.

이 문제의 핵심사항 중 하나는 공백문자를 포함한 문자열을 입력받는 방법이다.
c++의 std::cin 은 기본적으로 공백이나 엔터키까지 끊어서 입력받는다.
c++에서 공백을 포함하고 있는 문자를 입력받으려면, 
getline(cin,s) 또는 cin.getline(s, 최대길이, '\n') 으로 받을 수 있다.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, l, count = 0;
	string s;

	getline(cin, s); // 공백을 포함해서 문자열을 받을 수 있다
}