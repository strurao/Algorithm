/*
숫자를 문자열로 받고 리버스해서 숫자로 변환해서 값을 비교하면 된다

문자열 순서를 뒤집으려면 
문자열 앞부터 한글자씩, 끝부터 한글자씩 중간위치까지 서로 바꾸어 주면 된다
아래가 스왑의 예이다

	s = "abc";
	t = s[0];
	s[0] = s[2];
	s[2] = t;

물론 c++에 reversed 함수가 존재하나, 문제의 의도나 알고리즘 공부를 위해 위의 원리로 직접 구현했다
*/

#include <bits/stdc++.h>
using namespace std;

/** 직접 구현한 문자열 뒤집기 함수 */
void my_reversed(string& s)
{
	int i, l = s.length();
	int l2 = l / 2; // 문자열 중간까지만 서로 문자를 바꾸기 위해 길이 반값 계산
	char t;
	for (i = 0; i < l2; i++) // 길이의 반만 루프를 돌린다
	{
		// 한자리씩 이동하며 앞과 뒤값을 바꿔준다
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}

int main()
{
	string n1, n2;
	cin >> n1 >> n2; // 공백으로 구분해서 두 숫자 문자열을 받는다
	my_reversed(n1); // 첫번째 문자열을 뒤집어 준다
	my_reversed(n2); // 두번째 문자열을 뒤집어 준다
	if (stoi(n1) > stoi(n2)) // 정수형으로 크기를 비교해서 큰 값 출력
		cout << n1;
	else
		cout << n2;
	return 0;
}