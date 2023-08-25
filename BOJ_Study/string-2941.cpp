/*
주어진 단어문자열에서 한 글자씩 위치를 이동하면서 크로아티아 변경문자가 있는지 확인하면 된다
*/

#include <iostream>
using namespace std;

int main()
{
	int i, j, l, count = 0, ck = 0, an = 0;

	// 크로아티아 알파벳 변경 문자들 목록
	string ap[] = {"c=", "c-", "dz=", "d-", "lj" , "nj" , "s=" , "z="};
	string wd; // 단어를 입력받을 문자열
	cin >> wd; // 단어를 입력받는다
	l = wd.length(); // 단어길이
	i = 0; // 단어 위치 인덱스
	count = 0; // 알파벳 개수

	while (i < l)
	{
		ck = 0; // 변경 알파벳 체크 여부, 초기값 0
		for (j = 0; j < 8; j++)
		{
			an = ap[j].length(); // 변경 알파벳 글자수
			string wd2 = wd.substr(i, an); // 현재 비교 위치값에서 변경문자 길이 만큼만 추출
			if (wd2.compare(ap[j]) == 0) // 변경 문자와 같으면 알파벳 개수 증가
			{
				++count; // 변경 문자수가 많더라도 하나만 증가
				i += an; // 변경된 알파벳 수 만큼 인덱스값 증가
				ck = 1; // 변경 알파벳 체크 여부, 1
				break; // 변경된 알파벳을 찾았으므로 추가 비교 중단
			}
		}

		if (ck == 0) // 일반 알파벳이면 count 와 i 하나씩 증가
		{
			++count;
			++i;
		}
	}
	cout << count; // 알파벳 글자수 출력
	return 0;
}