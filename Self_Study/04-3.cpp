/*
구현

왕실의 나이트 문제

전형적인 시뮬레이션, 완전탐색, 2차원좌표를 이용하는 구현 문제 유형이다.
요구사항대로 충실히 구현하면 되는 문제이다. 
나이트의 8가지 경로를 하나씩 확인하며 각 위치로 이동이 가능한지 확인한다.
*/

#include <bits/stdc++.h>
using namespace std;

string inputData;

/*
나이트가 이동할 수 있는 8가지 방향 정의
아래,오른쪽은 양수값, 위,왼쪽은 음수값을 대입한 결과이다

     -r
 -c      +c
     +r

*/
int dx[] = { -2,-1,1,2,2,1,-1,-2 }; // 행 r
int dy[] = { -1,-2,-2,-1,1,2,2,1 }; // 열 c

int main()
{
	cin >> inputData; // 입력 예 : a1 (문제가 헷갈리라고 열행으로 나온걸까?)
	int row = inputData[1] - '0'; // 행
	int column = inputData[0] - 'a' + 1; // 열

	// 8가지 방향에 대하여 각 위치로 이동이 가능한지 확인
	int result = 0;
	for (int i = 0; i < 8; i++)
	{
		// 이동하고자 하는 위치 확인
		int nextRow = row + dx[i];
		int nextColunm = column + dy[i];
		// 해당 위치로 이동이 가능하다면 카운트 증가
		if (nextRow >= 1 && nextRow <= 8 && nextColunm >= 1 && nextColunm <= 8)
		{
			result += 1;
		}
	}
	cout << result << '\n';
	return 0;
}