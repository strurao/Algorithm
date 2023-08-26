// 알람시계
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);  // C++의 입출력 버퍼를 C 표준 입출력과 동기화하지 않음
	cin.tie(NULL);  // cin과 cout의 묶음 해제
	cout.tie(NULL); // cout의 묶음 해제
	int hour, min;
	cin >> hour >> min; // 시간, 분 입력
	
	if (min < 45)
	{
		min += 15;
		hour -= 1;
		if (hour < 0)
			hour = 23;
	}
	else
	{
		min -= 45;
	}

	cout << hour << " " << min << '\n';
}