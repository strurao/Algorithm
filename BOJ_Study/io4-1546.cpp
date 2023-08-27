// 평균 https://www.acmicpc.net/problem/1546
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++의 입출력 버퍼를 C 표준 입출력과 동기화하지 않음
	cin.tie(0);  // cin과 cout의 묶음 해제
	cout.tie(0); // cout의 묶음 해제

	int n = 0;
	double r = 0;
	double arr[1001]; // 문제에서 시험과목개수가 1000보다 작거나 같다고 말해줌

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n); // default 로 배열 오름차순 정렬 // quick sort(퀵 정렬)을 기반으로 함수가 구현되어있어, 평균 시간복잡도는 n log n

	// 가장 큰 수는 가장 마지막 인덱스에 위치하게 됨
	for (int i = 0; i < n; i++) {
		r = r + (arr[i] / arr[n - 1]) * 100; // (조작 된 성적 = (과목 / 최고 성적) * 100) 의 누적 합
	}

	cout << r / n;
	return 0;
}

/*
이 때 가장 주의해야 할 점은 '소수점 연산'이 필요하다는 것이다. 즉, 정수 연산이 아닌 실수 연산 한 뒤 출력하면 된다.
sort() 참고 : https://blockdmask.tistory.com/178

 [start, end)는 start 포인터부터 시작하여 end 포인터 바로 전까지의 요소들을 포함하는 구간을 의미합니다. 
 즉, 시작 포인터는 포함되지만 끝 포인터는 포함되지 않는 것이 특징입니다.
*/