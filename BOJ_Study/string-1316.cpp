/*
문자열을 받아 문자단위로 구분해서 체크할 수 있어야 풀리는 문제이다
그리고 문자의 반복 여부를 체크할 수 있는 알고리즘이 있어야 한다
*/

#include <iostream>
using namespace std;

/** 그룹단어 여부 체크 함수 */
int is_group_word(string wd) // wd: 그룹단어인지 체크할 단어. 그룹단어가 맞다면 1, 아니면 0 을 반환
{
	int i, cnum;
	int ck[26] = { 0 }; // 알파벳 사용여부 기록할 배열
	int anum = (int)'a'; // 'a'문자의 아스키 코드 값
	int l = wd.length(); // 단어 문자수
	char c0 = wd[0]; // 첫글자를 초기값으로 대입
	
	for (i = 1; i < l; i++) // 두번째 글자부터 비교 시작
	{
		if (c0 != wd[i]) // 새로운 문자가 시작되면
		{
			cnum = (int)wd[i] - anum; // 현재 문자의 아스키코드에서 'a'의 아스키코드를 빼면 알파벳 순서값이 된다
			if (ck[cnum] == 1) // 이미 해당 알파벳이 사용되었다면 그룹단어가 아니다
			{
				return 0; // 그룹단어가 아니므로 더 이상 비교할 필요가 없어져서 빠져나간다
			}
			else // 사용했던 문자가 아니라면
			{
				ck[(int)c0 - anum] = 1; // 이전 문자의 순서 위치에 사용문자로 등록
				c0 = wd[i]; // 이전 문자는 현재 문자로 변경
			}
		}
	}
	return 1; // 루프를 통과했다면 그룹단어이다. 1 리턴
}

int main()
{
	int i, n;
	int count = 0; // 그룹단어 개수 카우느
	string wd; // 단어저장용 변수
	cin >> n; // 단어 개수를 입력받아서 정수로 변환한 후 대입
	for (i = 0; i < n; i++) // n만큼 반복
	{
		cin >> wd; // 단어 한개를 받아온다
		if (is_group_word(wd) == 1) count++; // 그룹단어라면 개수 카운트 증가
	}
	cout << count; // 카운트 출력
	return 0;
}