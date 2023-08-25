#include <iostream>
using namespace std;

int main() {
	/*
	  0으로 초기화를 해야한다.
	  아니면 garbage value, 즉 쓰레기 값이 들어있게 된다.
	  이 때 0으로 초기화 하는 방법은 {} 괄호만 쳐주거나,
	  {0,}, {0} 방식이 있다.
	 */
	int count[10] = {};
	int a, b, c;

	cin >> a >> b >> c;

	int res = a * b * c;

	// 곱한 값이 0이 될 때 까지 반복
	while (res != 0) {
		count[res % 10]++;	// res에서 나머지 10을 통해 자릿수를 얻어 인덱스로 활용
		res /= 10;			//  매 회 자릿수를 줄이기 위해 10을 나눈다.
	}

	// 0 부터 9까지 count 배열을 출력한다. (for each문 사용)
	for (int v : count) {
		cout << v << "\n";
	}

	return 0;
}


/*
문제 본문은 길지만, 핵심은 하나다.
3개의 수를 곱한 수에 대해 각 자릿수들이 0~9까지 각각 몇 번 나왔는지를 출력하면 되는 문제다.

그러면 어떻게 풀이해야 할까?
바로 배열의 인덱스를 활용하여 문자의 개수를 세는 것이다.

https://st-lab.tistory.com/271
*/